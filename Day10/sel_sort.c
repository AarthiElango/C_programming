#include <stdio.h>
void sort(int *arr,int n);
void desc(int *arr,int n);
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
   sort(arr,n);
   for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
   printf("\n");
   desc(arr,n);
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
   printf("\n");


  return 0;
}
//ascending
void sort(int *arr,int n){
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
//descending
void desc(int *arr,int n){
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]<arr[j]){
	    int temp=arr[i];
	    arr[i]=arr[j];
	    arr[j]=temp;
	 }
      }
   }

}




