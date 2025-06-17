#include <stdio.h>
#include <stdlib.h>

int main(){
 int m,n;
 scanf("%d%d",&m,&n);
 
 int **mat=(int **)malloc(m*sizeof(int));
 
 for(int i=0;i<n;i++){
  mat[i]=(int *)malloc(n*sizeof(int));
 }

 for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
    scanf("%d",&mat[i][j]);
  }
 }

  for(int i=0;i<m;i++){
  for(int j=0;j<n;j++){
     printf("%d ",*(*(mat+i)+j));    
   }
  printf("\n");
  }


   for(int i=0;i<m;i++){
 
     free(mat[i]);
    }
   free(mat);

    
 return 0;
}
