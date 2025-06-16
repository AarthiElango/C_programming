#include <stdio.h>

void rotate(int arr[],int temp[],int k,int n,char ch);
int main()
{
 int n,k;
 char ch;
 printf("enter n:\n");
 scanf("%d",&n);
 int arr[n],temp[n];
 //input for array
 printf("Enter values of array: \n");
  for(int i=0;i<n;i++)
 { 
   scanf("%d",&arr[i]);
 }
  printf("enter value for k for rotate count: \n");
 scanf("%d",&k);
 printf("enter value L for left rotation and R for right rotation \n");
 getchar();
  scanf("%c",&ch);


 rotate(arr,temp,k,n,ch);
 //printing
 for(int i=0;i<n;i++)
 { 
 printf("%d ",temp[i]);
 }
 return 0;
}

void rotate(int arr[],int temp[],int k,int n,char ch){
  //left rotate 
  if(ch=='L'){
  for(int i=0;i<n;i++){
   int val= (i+k)%n;
   temp[i]=arr[val];
 }
  }
 
 //right rotate
  if(ch=='R'){
   for(int i=0;i<n;i++){
   int val= (i+k)%n;
   temp[val]=arr[i];
 }
  }

}

