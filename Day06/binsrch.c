#include <stdio.h>
int bin(int *arr,int n,int num);

int main(){
 int n;
 scanf("%d",&n);

 int arr[n];
 for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
 }
 printf("num to find:\n");
 int num;
 scanf("%d",&num);
 int val= bin(arr,n,num);
 if (val!=-1){
  printf("val is at %d\n",val+1);
 }
 else{
  printf("Not found\n");
 }
 return 0;
}

int bin(int *arr,int n,int num){
 int start=0;
 int end=n-1;
 while(start<=end){
   int mid=(start+end)/2;
   if(*(arr+mid) == num)
	 return mid;  
   else if( *(arr+mid) > num )
	   end=end-1;
   else
	   start=start+1;
 }
 return -1;
}
