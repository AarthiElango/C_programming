#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 FILE *ptr1;
 FILE *ptr2;
 FILE *final;

 ptr1= fopen("file1.txt","r");
 ptr2=fopen("file2.txt","r");
 final=fopen("final.txt","w");

 if(ptr1==NULL || ptr2 ==NULL || final ==NULL){
  printf("cant open file");
  return 0;
 }
 char ch;
 while((ch=fgetc(ptr1)) !=EOF){
   fputc(ch,final);
 }
  while((ch=fgetc(ptr2)) !=EOF){
   fputc(ch,final);
 }
 
fclose(ptr1);
fclose(ptr2);
fclose(final);


 return 0;
}
