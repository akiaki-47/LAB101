#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 100

void reversed(char s[]) 
{ 
    int n = strlen(s); 
    int i; 
    printf("\nReverse: ");
    for (i = n - 1; i >= 0; i--) { 
        if (s[i] == '_') {         
            s[i] = '\0';    
            printf("%s ", &(s[i]) + 1); 
        } 
    } 
    printf("%s", s); 
} 
  
int main() 
{ 
    char A[MAXN]; 
    char c;
    do{
     printf("\nNhap chuoi:");
    gets(A);
    printf("\nChuoi vua nhap la:");
    puts(A);
    reversed(A); 
    printf("\nEnter to continue , ESC to exit");
    c = getchar();	
	}while(c!=27);
   
    return 0; 
}
