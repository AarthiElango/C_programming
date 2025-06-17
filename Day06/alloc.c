#include <stdio.h>
#include <stdlib.h>

int main(){
 int *ptr,n;
 scanf("%d",&n);
 ptr=(int *)malloc(n*sizeof(int));
  
  for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

  int *temp=(int *)realloc(ptr,(n+1)*sizeof(int));

  ptr=temp;
  ptr[n]=100;
  for (int i = 0; i < n+1; i++) {
   printf("%d ",ptr[i]); 
  }
  printf("\n");
   
  int *arr;
  arr=(int *)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++) {
   printf("%d",arr[i]); 
  }
    printf("\n");

  free(ptr);
  free(arr);
  
  return 0;

}
