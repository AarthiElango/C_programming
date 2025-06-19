#include <stdio.h>

void balance();
void withdraw();
void deposit();
void pinchange();
int valid();

int pin=1304;
int amount=0;
int main()
{
 int choice;
 while(1){
 printf("\n1-check balance\n2-withdraw\n3-deposit\n4-change pin\n5-exit\nEnter choice :\n");
 scanf("%d",&choice);
 switch(choice){
  case 1:balance();
		 break;
  case 2:withdraw();
	 break;
  case 3:deposit();
	 break;
  case 4:pinchange();
	 break;
  case 5:return 0;
  default:printf("Invalid choice\n");
	  break;
 
 }
 }

 
 return 0;
}

void balance(){
    if(valid()){
    printf("current balance: %d\n",amount);
   }
    else{
   printf("invalid pin\n");}

 }

void withdraw(){
   int amt;
   printf("Enter amt to withdraw:\n");

   scanf("%d",&amt);

   if(valid()){
      if(amt>amount){
             printf("insufficient balance\n");  
	   }
      else{
         amount -= amt;
      }
   }
   else
   {
   printf("invalid pin\n");
   }
}

void deposit()
{
   int amt;
   printf("Enter amt to deposit:\n");
   scanf("%d",&amt);
   if(valid()){
   amount += amt;
   } 
   else{
   printf("invalid pin\n");
   }

 
}

void pinchange(){
  int p;
  printf("enter new pin:\n");
  scanf("%d",&p);
       pin=p;

  }

int valid(){
	int val;
	printf("Enter pin:\n");
 scanf("%d",&val);
 if(pin==val)
	 return 1;
 return 0;
}
