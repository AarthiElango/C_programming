#include <stdio.h>
int main()
{
	int m,n,r,c;
 printf("enter size of arr 1:\n");
 scanf("%d %d",&m,&n);
  printf("enter size of arr 2:\n");
 scanf("%d %d",&r,&c);
 int a[m][n];
 int b[r][c];
 int sol[m][c];
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
 }
 
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&b[i][j]);
    }
 }
 if(n==r){
 for(int i=0;i<m;i++){
   for(int j=0;j<c;j++){
   sol[i][j]=0;
   for(int k=0;k<n;k++){
      sol[i][j]+=a[i][k]*b[k][j];
   }
 }
 }
 }
 else
  {
  return 0;}
  for(int i=0;i<m;i++){
    for(int j=0;j<c;j++){
      printf("%d ",sol[i][j]);
    }
    printf("\n");
 }


return 0;

}
