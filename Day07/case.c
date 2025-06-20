/*#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void toggle(FILE *ptr);

int main() {
    FILE *ptr = fopen("file1.txt", "r");
    if (ptr == NULL) {
        perror("can't open file1.txt");
        return 1;
    }
    toggle(ptr);
    
    return 0;
}

void toggle(FILE *ptr) {
    FILE *file = fopen("file2.txt", "w");
    if (file == NULL) {
        perror("can't open destination file");
       
        exit(EXIT_FAILURE);
    }

    int ch;
    while ((ch = fgetc(ptr)) != EOF) {
        if (isupper(ch))
            ch = tolower(ch);
        else if (islower(ch))
            ch = toupper(ch);
        fputc(ch, file);
    }

    fclose(ptr);
    fclose(file);
}
*//**
 * C program to convert lowercase to uppercase and uppercase to lowercase 
 * characters in file.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void toggleCase(FILE *fptr, const char *path);


int main()
{
    /* File pointer to hold reference of input file */
    FILE *fPtr;
    char path[100];

    printf("Enter path of source file: ");
    scanf("%s", path);


    fPtr = fopen(path, "r");


    /* fopen() return NULL if unable to open file in given mode. */
    if (fPtr == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }


    toggleCase(fPtr, path);


    printf("\nSuccessfully converted characters in file from uppercase to lowercase and vice versa.\n");

    return 0;
}



/**
 * Function to convert lowercase characters to uppercase
 * and uppercase to lowercase in a file.
 */
void toggleCase(FILE *fptr, const char *path)
{
    FILE *dest;
    char ch;

    // Temporary file to store result
    dest = fopen("toggle.tmp", "w");


    // If unable to create temporary file
    if (dest == NULL)
    {
        printf("Unable to toggle case.");
        fclose(fptr);
        exit(EXIT_FAILURE);
    }


    /* Repeat till end of file. */
    while ( (ch = fgetc(fptr)) != EOF)
    {
        /* 
         * If current character is uppercase then toggle
         * it to lowercase and vice versa.
         */
        if (isupper(ch))
            ch = tolower(ch);
        else if (islower(ch))
            ch = toupper(ch);


        // Print toggled character to destination file.
        fputc(ch, dest);
    }



    /* Close all files to release resource */
    fclose(fptr);
    fclose(dest);


    /* Delete original source file */
    remove(path);

    /* Rename temporary file as original file */
    rename("toggle.tmp", path);
}
