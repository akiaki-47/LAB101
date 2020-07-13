#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
int xoa(char *a, int q)
{
    int n = strlen(a), i;
    for (i = q; i <= n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    return 0;
}
void xoakhoangtrang(char *a)
{
    int i, n=strlen(a);
    for (i = 0; i < n; i++)
    {
        if (a[0] == 32)
        {
            xoa(a, 0);
            n--;
        }
        if (a[n-1] == 32)
        {
            xoa(a, n-1);
            n--;
        }
        if (a[i] == 32 && a[i + 1] == 32)
        {
        	xoa(a, i);
            i--;
            n--;
        }
    }
}

void nameStr(char s[]){
	strlwr(s);
	int len = strlen(s); 
	for(int i = 0; i < len; i++){
		if(i == 0 || (i > 0 && s[i - 1] == 32) ){
			s[i] = toupper(s[i]);
		}
	}
}

int main(){
	char s[21];
	printf("Please enter a string: ");
	gets(s);
	int n = strlen(s);
	for(int i = 0; i < n; i++){
		if(s[i] == 33 || s[i] == 35 || s[i] == 64 || s[i] == 40 || s[i] == 41 || s[i] == 91 || s[i] == 93 || s[i] == 123 || s[i] == 125) {
			for(int j = i; j < n-1;j++){
				s[j] = s[j+1];
			}
			i -= 1;
			n -= 1;
		}
		if(s[i] == ' '){
			xoakhoangtrang(s);
		}
	}
	printf("The string after removing: ");
	puts(s);
	nameStr(s);
	printf("After convert: ");
	puts(s);
	getchar();
	return 0;
}
