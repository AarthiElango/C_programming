#include<stdio.h>
int add();
int main(){
 int sum=add();
 printf("%d\n",sum);
 return 0;
}

int add(){
 int x,y;
 scanf("%d %d",&x,&y);
 return x+y;
}
