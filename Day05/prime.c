#include <stdio.h>
void prime(int n);

int main(){
 int n;
 scanf("%d",&n);
 prime(n);
 return 0;
}

void prime(int n){
	int flag=0;
 for(int i=2;i<n/2;i++){
   if(n%2==0){
     flag=1;
     break;
   }
 
 }
 if(flag==0)
	 printf("%d is prime\n",n);
 else
	 printf("%d is not prime\n",n);
}
