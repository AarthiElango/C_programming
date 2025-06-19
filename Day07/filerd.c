#include <stdio.h>
#include <stdlib.h>

int main(){
   FILE *ptr;
   char ch;
   ptr=fopen("file.txt","r");
   if(ptr==NULL)
   {
    printf("Cant read file\n");
   }
   while(ch != EOF){
    ch=fgetc(ptr);
    putchar(ch);
   }

   fclose(ptr);

}
