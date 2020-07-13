#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputFileName(char fileName[]);
void inputContent(char content[]);
void writeFile(char fileName[], char content[]);
void readFile(char fileName[]);

int main()
{
    char fileName[100], content[100000];
    inputFileName(fileName);
    writeFile(fileName, content);
    readFile(fileName);

    return 0;
}

void inputFileName(char fileName[])
{
    printf("\nEnter File Name to Save Content: ");
    fflush(stdin);
    gets(fileName);
}

void inputContent(char content[])
{
    printf("Enter Content: ");
    fflush(stdin);
    gets(content);
    getchar();
}

void writeFile(char fileName[], char content[])
{
    FILE* f = fopen(fileName, "a");
    if (f == NULL)
    {
        printf(" There is an error when opening the file. Try another time.\n");
        return;
    }
    inputContent(content);
    fputs(content, f);
    fclose(f);
}


void readFile(char fileName[])
{
    FILE* f = fopen(fileName, "r");
    if (f == NULL)
    {
        printf(" There is an error when opening the file. Try another time.\n");
        return;
    }
    char c;
    printf("\nFile Content: \n");
    do {
       c = fgetc(f);
       printf("%c", c) ;
    } while (c != EOF);
    fclose(f);
    printf("\n");
}
