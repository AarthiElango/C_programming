#include <stdio.h>
void main(){
    int *ptr,x;
    ptr=&x;
    *ptr=0;
    printf("x=%d\t",x);                //0
    printf("ptr value=%d\n",*ptr);       //0
    *ptr+=5;
    printf("x=%d\t",x);               //5
    printf("ptr value=%d\n",*ptr);      //5
    printf("x=%d\n", (*ptr)++);       //as post incr,5 but internally incremented 

       printf("x=%d\t",x);            //6
    printf("ptr value=%d\n",*ptr);      //6
    printf("x=%d\n", ++(*ptr));         //as pre incr, 7 
       printf("x=%d\t",x);            //7
    printf("ptr value=%d\n",*ptr);      //7
    


           }
