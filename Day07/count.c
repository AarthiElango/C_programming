#include <stdio.h>
#include <stdlib.h>

int main()
{
 int character,word,line;
 character=word=line=0;
 FILE *ptr;
 ptr=fopen("cnt.txt","r");
 if(ptr == NULL){
  printf("Can't open file\n");
  return 0;
 }
 char ch;
 while((ch=fgetc(ptr)) != EOF){
   character++;
   if(ch=='\n' || ch == '\0'){
     line++;
   }
   if(ch=='\n'|| ch==' ' ||ch == '\t'||ch=='\0'){
     word++;
   }
 }
 printf("lines =%d\nword= %d\ncharacter=%d\n",line,word,character);
 fclose(ptr);
 
 return 0;
}
