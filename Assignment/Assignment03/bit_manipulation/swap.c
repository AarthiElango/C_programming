#include <stdio.h>
void swap(int* a,int* b);
int main()
{
  int a,b;
  printf("Enter 2 values");
  scanf("%d%d",&a,&b);
  swap(&a,&b); 
  printf("a=%d,b=%d\n",a,b);

  return 0;
}
void swap(int *a,int *b){
  *a=*a^*b;
  *b=*a^*b;
  *a=*a^*b;

}
