#include <stdio.h>
/*struct stu{
// int num;
};
int main()
{
 printf("%lu\n",sizeof(struct stu));
 //struct stu s;
 //printf("%d \n",s.num);
 return 0;
}*/


struct sample{int i:6;int ch:2;};

int main(){
  printf("%lu\n",sizeof(struct sample));
  return 0;
}
