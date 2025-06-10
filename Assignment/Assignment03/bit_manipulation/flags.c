#include <stdio.h>

 struct memory{
 unsigned int rd:1;
 unsigned int wr:1;
 unsigned int ena:1;
};

int main()
{ 
  struct memory m;
  int n1,n2;
  printf("Enter the number n1:\n");
  scanf("%d",&n1);
  m.rd=0;
  m.wr=1;
  m.ena=1;
  if(m.rd==1 && m.ena==1){
	 printf("Reading n1 %d\n",n1);
  }
  if(m.wr==1 && m.ena==1){
	 printf("writing from n1 to n2\n");
	 n2=n1;
         printf("n1 %d\nn2 %d\n",n1,n2);
  }

  return 0;
}

