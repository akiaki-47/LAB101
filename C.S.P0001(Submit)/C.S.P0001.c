#include <stdio.h>
#include <string.h>
#include <conio.h>

void input(char s[]){
	printf("Please enter string:");
	gets(s);
}

void output(char s[]){
	printf("%s",s);
}

void reverse(char s[]){
	char *token;
	char word[10][30];
	int count = 0;
	int i;
	token = strtok(s," \t");
	
	while(token !=  NULL){
		if(s == ' '){
			strcpy(word[count++], token);
			token = strtok(NULL, " \t");
		}
	}
	output(token);
	strcpy(s, "");
	
	for(i=--count; i>=0; i--){
		strcat(s, word[i]);
		strcat(s, "_");
	}
	//output(s);
}

int main(){
	char s[100], c;
	char st[10][30];
	do{
		input(s);
		printf("The old string:");
		output(s);
		printf("\nThe reversed string:");
		reverse(s);
		output(s);
		printf("\nPress enter to continue another reverse, ESC to exit");
		c = getch();
	}while(c!=27);
}
