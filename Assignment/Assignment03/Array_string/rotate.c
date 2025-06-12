#include <stdio.h>
int main()
{
 int m;
 scanf("%d",&m);
 int mat[m][m];
 int rot[m][m];
 for(int i=0;i<m;i++){
  for(int j=0;j<m;j++){
    scanf("%d",&mat[i][j]);
  }
 }
 
 for(int i=0;i<m;i++){
  for(int j=0;j<m;j++){
    printf("%d ",mat[i][j]);
  }
  printf("\n");
 }


   for(int i=0;i<m;i++){
  for(int j=0;j<m;j++){
     rot[j][m-1-i]=mat[i][j];


  }
 }
  for(int i=0;i<m;i++){
  for(int j=0;j<m;j++){
    printf("%d ",rot[i][j]);
  }
  printf("\n");
 }

 
 return 0;
}
