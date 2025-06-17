#include <stdio.h>

struct student{
 char c;
 int n;
 char ch;
 
};

struct emp{
 int n;
 char ch;
 char c;
};

int main(){
  struct student s;
  printf("sizeof student:%lu\n",sizeof(struct student));
  struct emp e;
  printf("size of emp:%lu\n",sizeof(struct emp));


}
