#include <stdio.h>
#include <string.h>
#define MAXSIZE 100

void print(char names[][41], char adds[][41], int  marks[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
        printf ("%s%s%d\n", names[i], adds[i], marks[i]);
}

void readFile(char * filename, char names[][41], char adds[][41], int *marks, int *pn)
{
    *pn = 0;
    FILE *f = fopen(filename, "r");
    if (f != '\0')
    {
        while ( fscanf(f, "%[^;];%40[^;];%d", names[*pn], adds[*pn], &marks[*pn]) == 3 )
            (*pn)++;
        fclose(f);
    }
}
void swapString(char str1[], char str2[]){
    char temp[41];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
void swapNumber(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void sort (char names[][41], char adds[][41], int *marks, int n)
{	
    int i, j;
    for (i = 0; i < n - 1; i++)
        for ( j = n - 1; j > i; j--){
        	if (strcmp(adds[j], adds[j - 1])  < 0)
            {
                swapString(names[j], names[j-1]);
                swapString(adds[j], adds[j-1]);
                swapNumber(&marks[j], &marks[j-1]);
            }
		}  
}

void writeFile(char * filename, char names[][41], char adds[][41], int marks[], int n)
{
    FILE * f = fopen(filename, "w+");
    int i;
    for ( i = 0; i < n; i++)
        fprintf(f, "%s;%s;%d\n", names[i], adds[i], marks[i]);
    fclose(f);
}

int main()
{
    char fileIn[] = "students_1.txt";
    char fileOut[] = "students_2.txt";
    char names[MAXSIZE][41];
    char adds[MAXSIZE][41];
    int marks[MAXSIZE];
    int n = 0;
    readFile(fileIn,names,adds,marks,&n);
    sort(names,adds,marks,n);
    writeFile(fileOut,names,adds,marks,n);
}
