#include <stdio.h>
 
struct stu{
      int roll;
      char name;
          };

void main(){
  struct stu s={1,'a'};
  printf("%d %c",s.roll,s.name);
  printf("%lu\n",sizeof(s));


}
