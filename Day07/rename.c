#include <stdio.h>
#include <stdlib.h>

int main()
{
 char old[50],new[50];
 printf("Enter old file name:\n");
 scanf("%s",old);
 printf("Enter new file name:\n");
 scanf("%s",new);

 if( rename(old,new)==0){
   printf("File renamed \n");
 }
 else{
  printf("file can't open\n");
 }


 return 0;
}
