#include <stdio.h>
void main()
{
  int n,r,cpd;
  float si,p;
  printf("Enter principal amount,no of years,rate of interest ,compound per year\n");
  scanf("%f%d%d%d",&p,&n,&r,&cpd);
    for(int i=0;i<n;i++)
      {
	for(int j=0;j<cpd;j++){
        si= (p*((float)r/cpd))/100;
	printf("SI =%.2f\n",si);
	p+=si;
	printf("P=%.2f\n",p);
	}

       }
}
