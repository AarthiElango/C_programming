#include <stdio.h>
int add(int a,int b)
{
 return a+b;
}
struct sample{
 int (*ptr)(int,int);
};

int main()
{
 struct sample s;
 s.ptr=add;
 int res=s.ptr(2,3);
 printf("%d\n",res);

 return 0;
}
