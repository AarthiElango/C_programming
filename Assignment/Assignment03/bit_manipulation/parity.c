#include <stdio.h>
int main()
{
 int num,parity;
 int gen=0;
 scanf("%d %d",&num,&parity);

 for(int i=0;i<32;i++)
 {
    gen^=(num>>i)&1;
 }
 if(gen==parity)
	 printf("valid");
 else
	 printf("Invalid");
 return 0; 
}
