#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
char menu(float money){
	char choice[2];
	do{
		printf("\n\n======================================\n");
		printf(" You have $%.2f\n", money);
		printf(" Choose one of the following options:\n");
		printf("======================================\n");
		printf("  1.Play the slot machine.\n");
		printf("  2.Save game\n");
		printf("  3.Cash out.\n");
		printf("--------------------------------------\n");
		printf("  Your choice: ");
		gets(choice);
		printf("--------------------------------------\n");
		if(strlen(choice) > 1){
			printf("This choice is not support!!!\n\n");
		}
	} while(strlen(choice) > 1);
	return choice[0];
}
void randomSlot(char slot[3]){
	int i;
	for(i = 0; i < 3;i++){
		slot[i] = (rand() % 10) + 48;
	}
}

int checkWin(char slot[3]){
	if(slot[0] == slot[1] && slot[1] == slot[2]){
		return 3;
	} else if (slot[0] == slot[1] || slot[0] == slot[2] || slot[1] == slot[2]){
		return 2;
	} else {
		return 1;
	}
}


int main(){
	char choice;
	float money = 10;
	FILE *file;
	file = fopen("money.txt","r");
	if(file != NULL){
		fscanf(file,"%f", &money);
	}
	fclose(file);
	do{
		choice = menu(money);
		switch(choice){
			case '1':
			{
				char slot[3];
				randomSlot(slot);
				money -= 0.25;
				printf("The slot machine show %s.\n", slot);
				int result = checkWin(slot);
				if(result == 1){
					printf("Sorry you don't win anything!\n");
				} else if (result == 2){
					money += 0.5;
					printf("You win 50cents! \n");
				} else {
					money += 10;
					printf("You win the big prize, $10.00!\n");
				}
				if(money < 0.25){
					printf("Sorry, you don't have enough money!");
					goto end1;
				}
				break;
			}
			case '2':{
				FILE *file;
				file = fopen("money.txt","w+");
				fprintf(file,"%.2f", money);
				fclose(file);
				printf("Your money had saved!");
				break;
			}
			case '3':{
				printf("Thank you for playing! You end with $%.2f", money);
				break;
			}
			default:{
				printf("This choice is not support!!!\n\n");
				break;
			}
		}
	}while(choice != '3');
	end1:
	return 0;
}
