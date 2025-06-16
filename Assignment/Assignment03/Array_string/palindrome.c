#include <stdio.h>
void palin(char* str);
int check(int i,int j,char* str);
int length(char *str);

int main()
{
 char str[100];
 scanf("%s",str);
 palin(str);

 return 0;

}

void palin(char* str){
 int len=length(str);
 int start=0,end=0;
 for(int i=0;i<len;i++){
  for(int j=i+1;j<len;j++){
        if(check(i,j,str)){
	   if(j-i+1>end){
	    start=i;
	    end=j-i+1;
       }
    }
  }
 }
 for(int i=start;i< start+end ;i++){
    printf("%c",str[i]);
 }
}

int check(int i,int j,char* str){
  while(i<j){
    if(str[i]!=str[j])
	    return 0;
    i++;
    j--;
  }
 return 1; 
}

int length(char* str){
  int n=0;
  while(str[n]!='\0') n++;
  return n;
}

