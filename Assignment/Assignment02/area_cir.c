#include<stdio.h>
#include<math.h>
#define pi 3.14   //constant value for pi

void main()
{
 char section='C';
 const int rad=3;  //constant value
 int area=pi*pow(rad,2); 
 printf("%d\n",area); 
 float l=12.2;
 double d=2.345;
 double area_r=l*d;
 printf("%lf\n",area_r);
 
}
