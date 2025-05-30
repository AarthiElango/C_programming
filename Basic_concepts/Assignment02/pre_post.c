#include <stdio.h>
void main(){
   int a=10;
   int b=20,c=30,d=40,e=50;
   //post 
   printf("a value befor post incr :%d\n",a);
   printf("post inc = %d\n",a++);
 printf("a value aftr post incr :%d\n",a);
 //pre
  printf("a value befor pre incr :%d\n",b);
   printf("pre inc = %d\n",++b);
 printf("a value aftr pre incr :%d\n",b);
 //asssign post 
  printf("c=%d\n",c);

 int post=c++;
 printf("post incr while assign post =%d\n",post);
 printf("post incr while assign C =%d\n",c);
 //assign in pre 
 printf("d=%d\n",d);
 int pre=++d;
  printf("pre incr while assign pre =%d\n",pre);
 printf("post incr while assign C =%d\n",d);
}
