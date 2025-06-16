//sum of row and column
#include <stdio.h>
int main()
{
 int m,n;
 scanf("%d%d",&m,&n);
 int arr[m][n];
 for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
    scanf("%d",&arr[i][j]);
  }
 }
 //print arr
 for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
    printf("%d ",arr[i][j]);
  }
  printf("\n");
 }
 // row sum
  for(int i=0;i<m;i++){
  int row=0;
  for(int j=0;j<n;j++){
    row+=arr[i][j];
  }
  printf("%d ",row);
  }
  printf("\n");
  //column sum
   for(int j=0;j<n;j++){
  int col=0;
  for(int i=0;i<m;i++){
    col+=arr[i][j];
  }
  printf("%d ",col);
  }

  printf("\n");





 return 0;
}
