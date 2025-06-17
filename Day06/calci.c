#include <stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);



int main()
{
 int (*fnptr[])(int,int)={add,sub,mul,div};

 int a,b,choice;

 printf("enter choice :\n add-0\nsub-1\nmul-2\ndivide-3\n");

 scanf("%d",&choice);

 printf("Enter a,b\n");

 scanf("%d%d",&a,&b);
 int res=fnptr[choice](a,b);
 printf("res=%d\n",res);
 return 0;
}


int add(int a,int b){
 return a+b;
}
int sub(int a,int b){
 if(a>b)
	 return a-b;
 return b-a;
}

int mul(int a,int b)
{
 return a*b;
 }

int div(int a,int b){
 if(b==0)
   return -1;
 return a/b;

}
