#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int input(){
	int n;
	printf("Enter an integer n: ");
	scanf("%d", &n);
	return n;
}

int main(){
	int key;
	do{
		int num = input();
		int total = 0, temp = 0;
			if(num < 0) {
				num *= -1;
			}
//		while(num < 0){
//			printf("Input natural number!!!\n");
//			num = input();
//		}
		while(num != 0){
			temp = num%10;
			total += temp;
			num /= 10;
		}
		printf("Sum: %d", total);
		printf("\nPress any key to continue, ESC to exit\n");
		key = getch();
	} while (key != 27);
	getchar();
}
