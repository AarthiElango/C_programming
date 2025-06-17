#include <stdio.h>

struct stu{
 int num;
};
int main()
{
 printf("%lu\n",sizeof(struct stu));
 struct stu s;
 printf("%d \n",s.num);
 return 0;
}

