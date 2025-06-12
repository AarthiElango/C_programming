#include <stdio.h>
#include <string.h>
int main()
{ 
 char arr[]="Aaarthii";
  
 int n=strlen(arr);
 int cnt[n];
 for(int i=0;i<n;i++){
   cnt[i]=0;
  }
 for(int i=0;i<n;i++)
  {
      if(cnt[i]==0){
		printf("%c ",arr[i]);
      for(int j=i+1;j<n;j++){
       	  if(arr[i]==arr[j]){
                cnt[i]=1;
		cnt[j]=1;
	  }
	}
      }
  }
 printf("\n");
 return 0;
}
