#include <stdio.h>
void main(){
   int *ptr;
   int *ptr1;
   int num[]={1,2,3,4,5};
   ptr=&num[0];
   ptr1=ptr+4;      //ptr1 in 2 position
   //add int to ptr
   ptr=ptr+2;     //points from cur pos(1) to 3
   printf("%p\t%d\n",ptr,*ptr);
   ptr=ptr-1;
   printf("%p\t%d\n",ptr,*ptr); //pointf from cur(3) to 2
   //subtraction btw ptrs
   printf("%d\t%d\n",ptr1-ptr,ptr1-ptr);  //incr value between ptr , if 12 by addr => 3 is diff 4 bytes) (difference in position )
   //2 qn
   int arr[]={1,2,3,4,5,6};
   int *ptr11,*ptr22;
   ptr11=arr;
   ptr22=arr+5;
   printf("sub btw ptrs %d \n",ptr22-ptr11);
   printf("diff btw ptr in bytes %d \n",(char *)ptr22 - (char *)ptr11); //pointer difference is based size of datatype,char = 1byte 
        }
