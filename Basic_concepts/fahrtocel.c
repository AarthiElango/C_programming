#include <stdio.h>
void main(){
// int celcius;
// int fval;
 float celcius;
 float fval;
 printf("fahrenheit\tcelsius\n");

 for(fval=0;fval<=300;fval=fval+20){
     celcius= 5 *(fval-32)/9;
     printf("%.2f \t %.2f \n",fval,celcius);
 }



}
