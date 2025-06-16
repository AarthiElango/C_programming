#include <stdio.h>
//Write a program in C to count the total number of duplicate elements in an array.

int count(int *arr,int n);

int main()
{
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
 }
 
 int cnt=count(arr,n);
 printf("duplicates count= %d\n",cnt);

}

int count(int *arr,int n){
	int c[n],cnt=0;
	
	for(int i=0;i<n;i++){
	c[i]=0;
	}
     	for(int i=0;i<n;i++){
          int flag=0;
	  for(int j=i+1;j<n;j++){
	    if(c[i]==1)
		continue;
	    if(arr[i]==arr[j]){
	         flag=1;
		 c[j]=1;

	    }
	  }
	  if(flag==1)
		  cnt++;
	  }
	
	return cnt;
 
	}
	


