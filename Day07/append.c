#include <stdio.h>
#include <stdlib.h>
#define size 1000

void readfi(FILE *ptr);

int main()
{
 FILE *ptr;
 ptr=fopen("file.txt","a");
 if(ptr==NULL)
 {
  printf("cant open file\n");
  return 0;
 }
 char arr[size];
 fgets(arr,size,stdin);
 fputs(arr,ptr);
 fclose(ptr);
 ptr=fopen("file.txt","r");
 readfi(ptr);
 fclose(ptr);
 return 0;
}

void readfi(FILE *ptr){
	char ch;
  while(ch!=EOF){
    ch=fgetc(ptr);
    putchar(ch);
   
  }

}


