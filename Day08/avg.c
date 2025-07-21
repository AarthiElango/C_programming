//You have a structure Sensor that contains a sensor name and its last 5 readings. Write a function that calculates the average reading for a given sensor.

#include <stdio.h>

typedef struct{
  char name[20];
  float val[5];

}temp;

float average(temp *t);

int main()
{
 temp t;
 scanf("%s",t.name);
 for(int i=0;i<5;i++){
  scanf("%f",&t.val[i]);
 }


 printf("%.2f",average(&t));
}

float average(temp *t){
  float avg=0,sum=0;
   for(int i=0;i<5;i++){
     sum+=t->val[i];
   }
   avg=sum/5;
   return avg;
}
