#include <stdio.h>

typedef struct {
  unsigned int hours;
  unsigned int mins;
  unsigned int sec;
	}time;


int main()
{
 time t1,t2,res;
 scanf("%d %d %d",&t1.hours,&t1.mins,&t1.sec);
 scanf("%d %d %d",&t2.hours,&t2.mins,&t2.sec);
 res.sec=t1.sec+t2.sec;
 res.mins=t1.mins+t2.mins+res.sec/60;
 res.hours=t1.hours+t2.hours+res.mins/60;
 
 res.mins %= 60;
 res.sec %= 60;
 printf("%dhr %dmin %dsec\n",res.hours,res.mins,res.sec);

 return 0;
}
