//Write a program to a=0×10 assume it 10 is in lower byte change it to higher byte.

#include<stdio.h>
int main()
{
	int num,num1,num2;
	printf("Enter the Number\n");
	scanf("%d",&num);
	num1=num>>15;
	num2=num<<15;
	num = num1 | num2;
	printf("After the change = %d\n",num);
	
}
