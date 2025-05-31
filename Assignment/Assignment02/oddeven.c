#include <stdio.h>
void main()
{
  int num,val;
  scanf("%d",&num);
  val=num&1;
  if(val==0)
     printf("%d is Even number",num);
  else
     printf("%d is odd number",num);

}
