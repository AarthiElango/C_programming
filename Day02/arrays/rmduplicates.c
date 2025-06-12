//remove duplicates from an array

#include <stdio.h>
int rmv(int arr[],int n);
void sort(int arr[],int n);
int main()
{ 
  int n;
  printf("Enter value of n:");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
   scanf("%d",&arr[i]); 
  }
  sort(arr,n);
  int val=rmv(arr,n);
  int ans[val];
  for(int k=0;k<val;k++){
   ans[k]=arr[k];
  }
  for(int i=0;i<val;i++){
  printf("%d ",ans[i]);
  }
  return 0;
}

int rmv(int arr[],int n){
  int temp[n];
  int i=0;
  
    for(int j=i+1;j<n;j++){
      if(arr[i]!=arr[j])
 	      arr[++i]=arr[j];
   }
return i+1;
}
void sort(int arr[],int n){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
	      int temp=arr[i];
                 arr[i]=arr[j];
		 arr[j]=temp;
      }
    }
  }
}
