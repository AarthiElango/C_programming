#include <stdio.h>


struct sample{
 unsigned int enable:1;
 unsigned int read:1;
 unsigned int write:1;
 unsigned int data:5;
};

int main(){
    struct sample s;
    int n;
    scanf("%d",&n);

    s.enable=n&1;
    s.read= (n>>1)&1;
    s.write= (n>>2)&2;
    if(s.enable==1 && s.read==1)
	    printf("read operation\n");
    if(s.enable==1 && s.write==1)
	    printf("Write operation\n");
    for(int i=3;i<8;i++){
        printf("%d ",(n>>i)&1);
    }
    printf("\n");
    return 0;
}
