//print yes if digits get repeated in the number
#include <stdio.h>
int main()
{
  int n;
  printf("Enter number n:\n");
  scanf("%d",&n);
  int seen[10]={0};
  while(n>0){
   int r=n%10;
   if(seen[r]==0)
	   seen[r]=1;
   else{
	   printf("Yes");
	   break;
  }
  n=n/10;
  }

  
  return 0; 
}
