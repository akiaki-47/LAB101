#include <stdio.h>
#include <string.h>
void input(char a[]){
	printf("Please enter string: ");
	gets(a);
}

void findMostChar(char temp[], int count[]){
	int max = count[0];
	for(int i=1; i < 52; i++){
		if(count[i]> max){
			max = count[i];
		}
	}
	for(int i=1; i < 52; i++){
		if(count[i] == max){
			printf("  %c  ", temp[i]);
		}
	}
	printf("\n");
	for(int i=1; i < 52; i++){
		if(count[i] == max){
			printf("  %d  ", count[i]);
		}
	}
}
void outputText(char temp[], int count[]){
	for(int i=0; i < 52; i++){
		if(count[i]>0){
			printf("  %c  ", temp[i]);
		}
	}
	printf("\n");
}

void outputNumber(int count[]){
	for(int i=0; i < 52; i++){
		if(count[i]>0){
			printf("  %d  ", count[i]);
		}
	}
	printf("\n");
}

void find(char a[], char temp[] ,int b[]){
	int len = strlen(a);
	for(int i=0; i < len; i++){
		if((int)a[i] >= 65 && (int)a[i] <= 90 || (int)a[i] >= 97 && (int)a[i] <= 122){
			for(int j=0; j<52; j++){
				if(a[i]== temp[j]){
					b[j] += 1;
				}
			}
		}
	}
}

int main(){
	char a[100];
	char temp[52] = {'a','b','c','d','e','f','g','h','i','j','k', 'l','m', 'n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N', 'O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int len,count[52] = {0};
	input(a);
	printf("Times of appearance for each character: \n");
	find(a, temp, count);
	outputText(temp,count);
	outputNumber(count);
	printf("Characters that appears the most: \n");
	findMostChar(temp, count);
}
