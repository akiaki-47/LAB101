#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void inputFileName(char fileName[]);
void readFile(char fileName[]);

int main()
{
    char fileName[MAX], cont;
    do
    {
        inputFileName(fileName);
        readFile(fileName);
        printf("\n\n Press an key to Continue ... Esc to Exit: ");
        fflush(stdin);
        scanf("%c", &cont);
    } while (cont != 27);
    return 0;
}

void inputFileName(char fileName[])
{
    printf("\nFile Name: ");
    fflush(stdin);
    scanf("%s", fileName);
}

void readFile(char fileName[])
{
    FILE* f = fopen(fileName, "r");
    if(f == NULL) {
        printf(" There is an error when opening the file. Try another time.");
        return;
    }
    char c;
    printf(" File Content: \n");
    do {
        c = fgetc(f);
        printf("%c", c);
    } while (c != EOF);
    fclose(f);
}
