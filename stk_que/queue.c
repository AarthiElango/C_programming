#include <stdio.h>
#define size 10
typedef struct{
 int qu[size];
 int front;
 int rear;
}queue;

void enqueue(queue *q,int n);
int dequeue(queue *q);
int isemp(queue *q);
int isful(queue *q);
int peek(queue *q);
void disp(queue *q);
int main(){
  queue q;
  q.front=0;
  q.rear=0;
  enqueue(&q,10);
  enqueue(&q,20);
  enqueue(&q,30);
  disp(&q);
  int n=dequeue(&q);
  printf("removed value %d\n",n);
  disp(&q);
   int pk=peek(&q);
  printf("peek %d\n",pk);
 
 return 0;
}

void enqueue(queue *q,int n){
  if(!isful(q)){  
      q->qu[q->rear]=n;
      q->rear++;
       disp(q);

}
else
printf(" queue is full\n");

}


int dequeue(queue *q){
	int n=-1;
if(isemp(q)){  
  printf(" queue is empty\n");
}
else
{
 n=q->qu[q->front];
 q->front++;
}
return n;
}
int isemp(queue *q){
  if(q->front==q->rear){
    return 1;
  }
  return 0;
}

int isful(queue *q){
  if(q->rear==size-1){
    return 1;
  }
  return 0;
}

int peek(queue *q){
  if(!isemp(q))
    return q->qu[q->rear];
  return -1;
}

void disp(queue *q){
	printf(" queue=> ");
  for(int i= q->front;i<q->rear;i++){
    printf("%d ",q->qu[i]);
  }
}
