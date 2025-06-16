#include <stdio.h>
#include <string.h>
void anag(char *str1,char *str2);

int main()
{
 char str1[20],str2[20];
 scanf("%s%s",str1,str2);
 if(strlen(str1)==strlen(str2)){
 anag(str1,str2);
 }
 else{
  printf("not anagram\n");
 }



 return 0;
}

void anag(char *str1,char *str2){
 int len=strlen(str1);
 int cnt[len];
 int mark[len];
 for(int i = 0; i < len; i++) {
        cnt[i] = 0;
        mark[i] = 0;
    }

 for(int i=0;i<len;i++){
    for(int j=0;j<len;j++){
       if(str1[i]==str2[j]  && mark[j]!=1){
         cnt[i]=1;
	 mark[j]=1;
	 break;
      }
    }
 }
 int flag=0;
 for(int i=0;i<len;i++){
   if(cnt[i]!=1){
     flag=1;
     break;
   }
 }
 if(flag==0){
 printf("Anagram\n");
 }
 else{
  printf("Not anagram\n");
 }
 
}
