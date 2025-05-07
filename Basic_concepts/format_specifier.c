#include <stdio.h>
void main(){
short i=7;
int d=10;
char c='a';
char s[]="hellooo";
unsigned int u=22;
long ld=1234567L;
float f=10.2;
double lf=10.243566466;
long double Lf=22.23113578L;
long long int lli=1234567878LL;
unsigned long long int llu=3452667687686LL;
int hex=16;
int oct =8;
int *ptr=&d;

printf("short = %%d %d size %zu \n",i,sizeof(i));
printf("int = %%d %d size  %zu \n ",d,sizeof(d));
printf("char = %%c %c size %zu \n ",c,sizeof(c));
printf("string  =%%s %s size %zu \n",s,sizeof(s));
printf("unsigned int =%%u %u size %zu \n",u,sizeof(u));
printf("long (decimal )=%%ld  %ld size %zu \n",ld,sizeof(ld));
printf("float =%%f  %f size %zu \n",f,sizeof(f));
printf("double (long float) =%%lf  %lf size %zu \n",lf,sizeof(lf));
printf("(Long double)= %%Lf %Lf size %zu \n",Lf,sizeof(Lf));
printf("long long int  = %% lli %lli size %zu \n",lli,sizeof(lli));
printf("unsigned long long int  =%%llu  %llu size %zu \n ",llu,sizeof(llu));
printf("hex value of 16 is %%x %x \n ",hex);
printf("oct value of 8 is%%o  %o \n ",oct);
printf("bin val of 16 is %%b %b \n ",hex);
printf("ptr = %%p %p \n",ptr);
printf("*ptr=  %%d %d \n",*ptr);
}
