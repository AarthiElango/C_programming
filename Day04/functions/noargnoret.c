#include <stdio.h>
void add();
int main(){
 add();
 return 0; 
}

void add(){

 int x,y;
 scanf("%d %d",&x,&y);
 printf("sum=%d\n",x+y);
}
