#include <stdio.h>
#include <stdlib.h>

#define size 1000
int main()
{
  char arr[size];
  FILE *fptr;
  fptr=fopen("file.txt","w");
  if(fptr== NULL){
    printf("Cant open file\n");
    return 0;
  }
  fgets(arr,size,stdin);
  fputs(arr,fptr);
  
  fclose(fptr);
  return 0;
}
