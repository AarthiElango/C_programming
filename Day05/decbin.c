#include <stdio.h>
#include <string.h>
void dtob(int n);

int main(){
 int n;
 scanf("%d",&n);
 dtob(n);
 return 0;
}

void dtob(int n){
  char s1[32]="";
  int i=0;
  while(n>0){
    s1[i++]=n%2+'0';
    n=n/2;
  
  
  }
  for(int i=strlen(s1);i>=0;i--){
  printf("%c",s1[i]);
  }
  printf("\n");

}
