#include <stdio.h>
void main()
{
  int op1,op2;
  char choice;
  printf("Enter op1,op2\n");
  scanf("%d%d",&op1,&op2);
  getchar();
  printf("Enter the choice of operations for calculator:");
  scanf("%c",&choice);

  switch(choice)
   {
    case '+':printf("%d\n",op1+op2);
	     break;
    case '-':printf("%d\n",op1-op2);
	     break;
    case '*':printf("%d\n",op1*op2);
	     break;
    case '/':if(op2==0)
                  printf("Dividend can't be zero");
	     printf("%d\n",op1/op2);
	     break;
    case '%':if(op2==0)
		     printf("dividend cannot be zero");
	     printf("%d\n",op1%op2);
	     break;
    default:printf("Invalid operation\n");
   }
  
  if(op1>op2)
	  printf("op1 is greater");
  else if(op1<op2)
	  printf("op2 is greater");
  else if(op1==op2)
	  printf("Equal");
  else if(op1>0 && op1<100)
	  printf("0p1 is valid");
  else
	  printf("invalid");
 }
