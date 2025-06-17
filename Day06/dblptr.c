#include <stdio.h>
#include <stdlib.h>
int main()
{
 char a[] = "aaaa";
 char b[] = "bbb";
 char c[] = "ccc";
    
 char *names[] = {a, b, c};
 char **ptr=names;
 **ptr='d';
 printf("%s\n",*names);
 return 0;
}
