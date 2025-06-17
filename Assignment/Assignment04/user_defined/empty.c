#include <stdio.h>

struct empty{

};

int main(){
  printf("size of empty struct: %lu\n",sizeof(struct empty));
  return 0;
}
