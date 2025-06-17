#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu{
  int id;
  char *name;
};

int main(){

  struct stu s1;
  s1.name=malloc(20);
  s1.id=1;
  strcpy(s1.name,"helloo");
  struct stu s2;
  s2=s1;
  
  strcpy(s2.name,"Elango");
  printf("s1 id %d name %s \n",s1.id,s1.name);
  printf("s1 id %d name %s \n",s2.id,s2.name);

  
  return 0;
i}
