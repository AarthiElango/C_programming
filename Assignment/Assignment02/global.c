#include<stdio.h>
int max=10;
void count();
void main(){
  printf("%d\n",max);
  count();
  printf("%d\n",max);
  
 }

void count(){
  max++;

 }
