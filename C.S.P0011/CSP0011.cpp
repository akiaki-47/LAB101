#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convertToDecimal(char* number, int base){
	int result = 0;
	for(int i = 0; i < strlen(number); i++){
		if (number[i] >= 'A' && number[i] <= 'F'){
			result = (result + 10 + number[i] - 'A') * base;
		} else result = (result + number[i] - '0') * base;		
	}
	return result / base;	
}


void showMenu(){
	printf("---------MENU---------\n");
	printf("1. Convert Binary to Decimal\n");
	printf("2. Convert Octal to Decimal\n");
	printf("3. Convert Hexa to Decimal\n");	
	printf("4. Exit\n");
	printf("----------------------\n");
}
void inputBinary(){
    char binaryNum[10];
    bool isBinary = true;
	printf("Enter a binary number: "); 
	scanf("%s", binaryNum);
	int length = strlen(binaryNum);
	int i;
	for(i = 0; i < length; i++){		
		if(binaryNum[i] != '0' && binaryNum[i] != '1'){
			printf("Not binary\n");
			isBinary = false;
			break;
		}	
	}
	if(isBinary)	{
		printf("Decimal number is %d\n", convertToDecimal(binaryNum, 2));
	}
}
void inputOctal(){
	char octalNum[10];
	bool isOctal = true;
	printf("Enter a octal number: "); 
	scanf("%s", octalNum);
	int length = strlen(octalNum);
	int i;	
	for(i = 0; i < length; i++){
		if(!(octalNum[i] >= '0' && octalNum[i] < '8')){
			printf("Not Octal\n");
			isOctal = false;
			break;		
		}
	}
	if(isOctal){
		printf("Decimal number is %d\n", convertToDecimal(octalNum, 8));		
	} 
}
void inputHexa(){
	char hexaNum[10];
	bool isHexa = true;
	printf("Enter a hexa number: ");
	scanf("%s", hexaNum);	
	int length = strlen(hexaNum);
	int i;
	for(i = 0; i < length;i++){
		if((hexaNum[i] < '0' || hexaNum[i] > '9') && (hexaNum[i] <'A' || hexaNum[i] >'F')){
			printf("Not Hexa\n");
			isHexa = false;
			break;
		}
	}
	if(isHexa){
		printf("Decimal number is %d\n", convertToDecimal(hexaNum, 16));
	}
}
int main(){		
	int key = 1;
	do{
		showMenu();
		int choice;
		
		printf("Choose 1 out of 4: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1: 		
				fflush(stdin);		
			    inputBinary();
				break;
			case 2:			
				fflush(stdin);
				inputOctal();
				break;
			case 3:			
				fflush(stdin);
			    inputHexa();
				break;
			case 4: 
				key = 0;
				break;
			default: printf("\n\tEnter number(1-4)\n ");		}			
	}while(key);	
	return 0;
}


