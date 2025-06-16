#include <stdio.h>
int maxi(int a,int b);
int main()
{
 int n,s;
 printf("enter n and s :\n");
 scanf("%d%d",&n,&s);
 int arr[n];
 for(int k=0;k<n;k++)
 {
  scanf("%d",&arr[k]);
 
 }
int len=0,i,j;
 for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
     int sum=0;
     for(int k=i;k<=j;k++){
       sum+=arr[k];

     }
     if(sum==s){
       len=maxi(len,(j-i+1));
     }
  }
 }
 printf("longest subarray is of len %d\n",len);

 return 0;
}

int maxi(int a,int b){
	if(a>b)
	  return a;
        return b;
             
 
}
