#include <stdio.h>
void main(){
   printf("short size = %lu \n",sizeof(short));	   
  //1
   short s=200*200;    
    
                      //out of range 
   printf(" s=%d \n",s);
   if(s== 200*200){
     printf(" equal "); 
   }
   else 
     printf("not equal");
  //2    
   short v=1;
   while(v++ >= 1);  //loops 1,2....32767 then -32768 
   printf("%d \n",v);   
  //3
   unsigned short u;
  //short u;
   for(u=5;u>=0;u=u-1){
       printf("%d",u);
              }

       }
