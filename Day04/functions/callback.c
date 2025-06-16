#include <stdio.h>
void fun();
void call(void (*ptr)());
void fun(){
 printf("Function fun\n");
}

void call(void (*ptr)() ){
 (*ptr)();

}

int main()
{
  void (*ptr)() = &fun;
  call(ptr);
}
