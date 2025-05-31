#include <stdio.h>

void main(){
  int ch=-65;
  printf("%c \n",ch);
  unsigned char uc='$';
  char c='$';
  printf("%c \t %d  \n%c \t %d \n",uc,uc,c,c);
  void *ptr=&c;
  printf("pointer \t %c\n",*(char *)ptr);
  int int_val=10;
  float float_val=int_val; //implicit typecast 
  printf("int assigned to float %f\n",float_val);
  float fl=20.9;
  int nu=fl;//need explicit conversion but truncates automatically ??
  printf("float assigned to int no type cast %d\n",nu);	    
  int nu_ex=(int)fl;
   printf("float to int explicit %d",nu_ex); 
int charVal=65;
char charac=charVal;
 printf("int to char %c ",charac);


}
