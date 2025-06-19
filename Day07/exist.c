#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int isexist(const char *path);

int main()
{
 char path[100];
 printf("Enter file name:\n");
 scanf("%s",path);
 if(isexist(path)){
  printf("File exists\n");
 }
 else{
  printf("file doesnt exists\n");
 }
 return 0;
}

int isexist(const char *path){
  if(access(path,F_OK)==-1) //-1 means F_OK not allowed 
	  return 0;
  return 1;
  
 
}
