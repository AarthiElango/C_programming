#include <stdio.h>

void main(){
  int x = 11;
  int y;
 // value of x doesn't change
  y = sizeof(x++);// sizeof works in compile time ,x++ doesn't work 
  printf("y= %d \n x=%d",y,x);
  printf("size of int %lu \n",sizeof(int));
  printf("size of char %lu \n",sizeof(char));
  printf("size of float %lu \n",sizeof(float));
  printf("size of double%lu \n",sizeof(double));         
}
