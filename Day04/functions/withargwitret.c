#include <stdio.h>
int add(int a,int b);
int main()
{ 
 int x,y;
 scanf("%d %d",&x,&y);
 int sum=add(x,y);
 printf("sum=%d\n",sum);
 return 0;
}

int add(int a,int b){
 return a+b;
}
