//Print ASCII values of a string using pointers.
#include <stdio.h>
#include <string.h>
int main(){
  char arr[100];
  scanf("%s",arr);
  for(int i=0;i< strlen(arr);i++){
    printf("%c %d\n ",*(arr+i),*(arr+i));
   
  }
 
}
