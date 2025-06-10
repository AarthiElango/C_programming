#include <stdio.h>
int rev(int num);
int main()
{
 unsigned int num;
 scanf("%u",&num);

 unsigned int ans;
 ans=rev(num);
 printf("%u\n",ans);

 return 0;
}
int rev(int num){
 unsigned int lsb,ans=0;
 for(int i=0;i<32;i++)
 {
  lsb=(1<<i)&num;
  ans=(lsb << (31-i))|ans;
  
 }
 return ans;

}



