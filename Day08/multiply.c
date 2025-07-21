#include <stdio.h>

int main(){
  char s1[50],s2[50];
  scanf("%s %s",s1,s2);
  int a[50],b[50];
  //store in rev order 
  for(int i=0;i<50;i++){
      a[50-i-1]=s1[i]-'0';
  }
  for(int i=0;i<50;i++){
      b[50-1-i]=s2[i]-'0';
  }

  int sum[100]={0};
  //multiply
  for(int i=0;i<50;i++){
   for(int j=0;j<50;j++){
     sum[i+j]+=a[i]*b[j];
   }
  }

  //carry
  for(int i=0;i<99;i++){
   sum[i+1] += sum[i]/10;
   sum[i] %= 10;
  }
  //print
  for(int i=99;i>=0;i--){
 
  printf("%d",sum[i]);  }
  printf("\n");
 

}




