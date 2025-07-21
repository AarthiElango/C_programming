//Minimum Cost to Move Chips to The Same Position
#include <stdio.h>
int minCostToMoveChips(int* position, int positionSize);
int minimum(int a,int b);

int main() {
    int position[] = {2,2,2,3,3};
    int positionSize = 5;

    int result = minCostToMoveChips(position, positionSize);

  
    printf("Output: %d\n", result);
    return 0;
}
int minCostToMoveChips(int* position, int positionSize) {
    int odd=0,even=0;
    for(int i=0;i<positionSize;i++){
        if(position[i]%2==0)
          even++;
        else
         odd++;
    }
    int min=minimum(even,odd);
    return min;
}

int minimum(int a,int b){
    if(a<b) return a;
    return b;
}
