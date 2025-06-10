#include<stdio.h>
void unique(int arr[],int n);
int main()
{
 int arr[]={5,5,3,3,9,7,6,2,5,3};
 int n=sizeof(arr)/sizeof(arr[0]);
 unique(arr,n);
 return 0;
 }

void unique(int arr[],int n){
	int cnt;
  for(int i=0;i<n;i++)
  {
  cnt=0;
   for(int j=0;j<n;j++){
     if((i!=j) && ((arr[i]^arr[j])==0))
	   cnt++;
   }
   if(cnt==0){
   printf("%d\n",arr[i]);
   }
  }
}
