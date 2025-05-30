#include <stdio.h>
struct stu{
	int rollNo;
	char name[20];
	float avg};

int main()
{
 struct stu s={1,"Aadhi",93.23};
 printf("size of struct %lu \n",sizeof(s));
 return 0;

 }
