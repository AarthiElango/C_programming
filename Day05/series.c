#include <stdio.h>

int fact(int n);
int main(){
  int n;
  scanf("%d",&n);
  int sum=0;
  for(int i=n;i>0;i--){
   sum+=(fact(i)/i);
  }
  printf("%d\n",sum);
  return 0;
}

int fact(int n){
	int s=1;
  for(int i=n;i>0;i--){
    s*=i;
  }
  return s;
}
