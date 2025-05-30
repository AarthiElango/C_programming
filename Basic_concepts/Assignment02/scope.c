#include <stdio.h>
int limit=20;
void local_method();
void main()
{ 
  printf("limit in main %d\n",limit);
  local_method();
  local_method();
  
  
 
  
}
void local_method(){
 int limit=10;
 static int min=1;
 min++;
 printf("%d\n",min);
 printf("limit in local%d\n",limit);
  
}
