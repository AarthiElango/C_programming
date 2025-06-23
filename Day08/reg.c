
//You are given a structure that simulates a status register with individual bits for different flags. Write a function that takes a StatusRegister and prints which flags are enabled.

#include <stdio.h>
typedef struct 
{
  unsigned int power : 1;
  unsigned int error : 1;
  unsigned int busy  : 1;
  unsigned int ready : 1;
  unsigned int reserved :1;

}status;

void decode(int n,status *s);


int main()
{
 status s;
 int n;
 printf("Enter number: (0-31)\n");
 scanf("%d",&n);
 decode(n,&s);

 

 return 0;
}

void decode(int n,status *s){
  s->power =(n>>0)&1;
 s->error =(n>>1)&1;
 s->busy =(n>>2)&1;
 s->ready =(n>>3)&1;
 s->reserved =(n>>4)&1;

 if(s->power)
	 printf("POWER ON\n");
 if(s->error)
	 printf("ERROR OCCURED\n");
 if(s ->busy)
	 printf("BUSY\n");
 if(s->ready)
	 printf("READY\n");
 if(s->reserved)
	 printf("RESERVED\n");

}
