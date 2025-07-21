#include <stdio.h>
int main(){
  int n;
  printf("Enter n:\n");
  scanf("%d",&n);
  int arr1[n],arr2[n];
  for(int i=0;i<n;i++){
    scanf("%d",&arr1[i]);
  }
   for(int i=0;i<n;i++){
    scanf("%d",&arr2[i]);
  }

  int cnt[n],mark[n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr1[i]==arr2[j] && mark[j]!=1){
        cnt[i]=1;
	mark[j]=1;
      }
    }
  }

  for(int k=0;k<n;k++){
    if(cnt[k]!=1){
	  printf("not equal\n");
          return 0;
    }
  }
  printf("Equal\n");


}
