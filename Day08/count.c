#include <stdio.h>

typedef struct {
  char arr[20];
  enum state{ok,error}st;
}status;

void getval(status *s);
int cnt(status *s,int n);


int main()
{
 int n;
 scanf("%d",&n);
 status s[n];

 for(int i=0;i<n;i++){
 getval(&s[i]);
 }
 n=cnt(&s,n);
 printf("Devices with ERROR: %d\n", n);
 return 0;
}

void getval(status *s){
	printf("Enter device name:\n");
   scanf("%s",s->arr);
   int val;
   scanf("%d",&val);
   s->st=(val==1)?error:ok;
}

int cnt(status *s,int n){
  int ct=0; 
 for(int i=0;i<n;i++){
    if(s[i].st==error){
     ct++;
    }
  }
 return ct;
}
