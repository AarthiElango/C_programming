#include<stdio.h>

struct regist{
 unsigned int reg:8;
};

struct regist set(struct regist r,int pos);
struct regist clear(struct regist r,int pos);
struct regist toggle(struct regist r,int pos);
unsigned int read(struct regist r);




int main()
{
 unsigned int val;
 struct regist r={0};
 r=set(r,1);
 printf("%u\n",r.reg);
 r=clear(r,1);
 printf("%u\n",r.reg);

 r=toggle(r,3);
 printf("%u\n",r.reg);

 val=read(r);
 printf("%u\n",val);

 return 0;
}

struct regist set(struct regist r,int pos)

{
	r.reg=r.reg | (1<<pos);
	return r;
}

struct regist clear(struct regist r,int pos)
{
	r.reg=r.reg & (~(1<<pos));
	return r;
}
struct regist toggle(struct regist r,int pos)
{
	r.reg=r.reg ^(1<<pos);
	return r;
}

unsigned int read(struct regist r)

{      	return r.reg;
}



