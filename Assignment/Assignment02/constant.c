#include <stdio.h>
void main(){
 const int max=30;
 printf("%d\n",max);
 max=50; //causes error due to immutability of const value 

 }
