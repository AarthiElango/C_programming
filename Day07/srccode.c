#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fptr;
    
    char ch;

    fptr = fopen("case.c","r");
    if(fptr==NULL){
    
    printf("cant open file\n");
    }

    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fptr);
    return 0;
}
