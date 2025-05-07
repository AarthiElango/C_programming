#include <stdio.h>
void main(){
 float c,f;
 printf("celsius \t fahrenheit\n");
 for(c=300;c>=0;c-=20){
     f=(9/5)*(c+32);
     printf("%3.3f \t %3.3f\n",c,f);
 }



}
