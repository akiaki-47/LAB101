#include<stdio.h>
#include<conio.h>
int input(){
	int n;
	do{
		printf("Please enter a number (1 - 9):");
		scanf("%d", &n);
		if(n > 0 && n < 10){
			return n;
		} else {
			printf("Not available!\n");
			return -1;
		}
	} while(n != 0);
}
void funtionMutiply(int n){
		int i;
		if(n == -1){
			return;
		}
		for(i = 1; i <= 10; i++){
		printf("%d x %d = %d", n, i, n*i);
		printf("\n");
	}
}
int main(){
	int key;
	int n;
	do{
		n = input();
		funtionMutiply(n);
		printf("Press Enter to continue, ESC to exit! ");
		key = getch();
		getchar();
		printf("\n");
	} while(key != 27);
}
