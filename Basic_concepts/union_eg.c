#include <stdio.h>
union data{
  int i;
  float f;
  char c;

};
int main(){
  union data d;
  d.i=4;
  printf("i=%d\n",d.i);
  printf("size %zu\n",sizeof(d.i));
  d.f=2.2;
    printf("\n i=%d value of i after f\n",d.i);

  printf("f=%f\n",d.f);
    printf("size %zu\n",sizeof(d.f));

  d.c='D';
  printf("c=%c\n",d.c);
    printf("size %zu\n",sizeof(d.c));
  printf("size of d %zu\n",sizeof(d));

  printf("i=%d\n",d.i);





return 0;
}
