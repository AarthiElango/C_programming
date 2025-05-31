#include<stdio.h>
void main()
{
  int arr[]={1,2,3,4,3,4,2,32};
  int size=sizeof(arr[0]);
  int size_arr=sizeof(arr)/sizeof(arr[0]);
  printf("size of elements=%d\nnumer of elements in this array=%d\n",size,size_arr);
  printf("size of array=%d\n",sizeof(arr));
}
