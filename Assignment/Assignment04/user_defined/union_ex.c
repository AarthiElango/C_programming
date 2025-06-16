#include<stdio.h>
#include <string.h>
union student{
 int id;
 char name[20];
};


int main()
{
 union student s;
 s.id=1;
 printf("%d\n",s.id);
 strcpy(s.name,"Anu");
 printf("%s\n",s.name);

 return 0;
}
