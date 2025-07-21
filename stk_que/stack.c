#include <stdio.h>
#define size 10

typedef struct{
 int st[size];
 int top;
}stack;
void disp(stack *stk);
void push(stack *stk,int n);
int pop(stack *stk);
int peek(stack *stk);
int isEmpty(stack *stk);
int isFull(stack *stk);

int main()
{
 stack stk;
 stk.top=-1;
 push(&stk,10);
 push(&stk,20);
 push(&stk,30);
 push(&stk,40);
 disp(&stk);
 int n=pop(&stk);
 printf("popped value: %d\n",n);
 int val=peek(&stk);
 printf("peek value is %d\n",val);
 return 0;
}

void push(stack *stk,int n){
  if(!isFull(stk)){
	  stk->top++;
	  stk->st[stk->top]=n;
  }
  else
  printf("Stack is full\n");
}

int pop(stack *stk){
 int num=0; 
 if(isEmpty(stk)){
       printf("Stack is empty\n");
       return -1;
       
  }
  else
  {
   num=stk->st[stk->top];
    stk->top--;
}
return num;
}

int peek(stack *stk){
  if(isEmpty(stk)){
       printf("Stack is empty\n");
       return -1;
       
  }
  return stk->st[stk->top];
}


int isEmpty(stack *stk){
  if(stk->top==-1)
	  return 1;
  return 0;
 
}

int isFull(stack *stk){
  if((stk->top )>=size)
	  return 1;
  return 0;
 
}

void disp(stack *stk){
 int i;
  for(i=0;i<=stk->top;i++){
    printf("%d ",stk->st[i]);
  }

}
