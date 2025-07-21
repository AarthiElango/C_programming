#include <stdio.h>


int main()
{
  int n;
  printf("enter n\n");
  scanf("%d",&n);
  int arr[n];
  //input arr values
  for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
  }
  //printing values
   for(int i=0;i<n;i++){
   printf("%d ",arr[i]);
   }
   printf("\n");
   int flag=0;
   for(int i=0;i<n/2;i++){
    if(arr[i]!=arr[n-i-1]){
	    flag=1;
            break;
    }

   }
   if(flag==1)
	   printf("not palindrome\n");
   else
	   printf("palindrome\n");
 return 0;
}
