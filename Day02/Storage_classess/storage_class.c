#include <stdio.h>

  extern int ext_num;
   int count();

void main(){
  auto int num=10;

  static int s_num;
  register int r_num=22;

  count();
  printf("auto = %d \n extern =%d \n register = %d \n ",num,ext_num,r_num);
  count();
}

 int count(){
  static int s_num=0;
  s_num++;
  printf("static =%d\n",s_num);
 
  return 0;
 }



