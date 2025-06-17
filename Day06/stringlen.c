//Find length of a string using pointer
#include <stdio.h>
int main()
{
 char arr[100];
 scanf("%s",arr);
 int i=0;
 while( *(arr+i) != '\0'){
   i++;
 
 }
 printf("length is %d\n",i);
 return 0;

}
