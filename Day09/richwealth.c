
#include <stdio.h>

int max(int a,int b);
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize);

int main(){
    int a[3][3] = {
        {1, 2, 3},
        {3, 2, 1},
        {4, 5, 1}
    };

  
    int* accounts[3];
    for (int i = 0; i < 3; i++) {
        accounts[i] = a[i];
    }

    int accountsColSize[3] = {3, 3, 3};
    int result = maximumWealth(accounts, 3, accountsColSize);

    printf("Maximum wealth is: %d\n", result); return 0;
}

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int ans=0;
    for(int i=0;i<accountsSize;i++){
        int sum=0;
        for(int j=0;j<*accountsColSize;j++){
              sum += accounts[i][j];
              ans=max(sum,ans);
        }
    }
    return ans;
}


int max(int a,int b){
    if(a>b)
      return a;
    return b;
}
