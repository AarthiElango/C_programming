#include <stdio.h>
#include <stdio.h>

struct node{
 int data;
 struct node *next;
};

int main()
{
 struct node *head=malloc(sizeof(struct node));
 head->data=10;
 head->next=malloc(sizeof(struct node));
 head->next->data=20;
 head->next->next=NULL;
 printf("%d ",head->data);
 printf("%d",head->next->data);
 return 0;
}
