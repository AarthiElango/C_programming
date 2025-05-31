#include<stdio.h>
int main()
{
 const float pi=3.14;
 int rad;
 float area;
 printf("Enter value of radius:\n");
 scanf("%d",&rad);
 area=pi*rad*rad;
 printf("Area of circle is %f\n",area);

 return 0;
}
