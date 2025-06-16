#include <stdio.h>
#pragma pack(1)

struct stu{
   int n;
   char c;
};

int main(){
  struct stu s;
  printf("%lu\n",sizeof(s));
  #pragma pack()
}
