#include<stdio.h>
void main(){
	void input(int[] );
	int no_of_sub=5;
	int total=0,average;
	int marks[5];
	char grade;
        input(marks);	           	
	for(int j=0;j<5;j++){
	   if(marks[j]>=0 && marks[j]<=100){
	      continue;
	   } 
	   else{
	     printf("enter valid marks between 0 to 100\n");
	     input(marks);
	   }
	}
	for(int i=0;i<5;i++){
           total+=marks[i];	   
   
	}
	average=total/5;
        if(average>=90)
		grade='A';
	else if(average>=80 && average<90)
		grade='B';
	else if(average>=70 && average<80)
		grade='C';
	else if(average>=60 && average<70)
		grade='D';
	else
		grade='F';
	switch(grade){
	  case 'A':printf("Excllent\n");
		   break;
	  case 'B':printf("very good\n");
		   break;
	  case 'C':printf("Good\n");
		   break;
          case 'D':printf("need to improve\n");
		   break;
	  case 'F':printf("Fail,try again\n");
		   break;
          default:printf("Invalid grade\n");
	       
	
	
	}


}

void input(int marks[]){
 printf("provide marks of 5 subjects:\n");
 for(int i=0;i<5;i++){
    scanf("%d",&marks[i]);
                     }

        }
