//Write a program to convert little to big endian
#include<stdio.h>
int main()
{
	int num,i,j;
	char *p;
	printf("Enter the number\n");
	scanf("%x",&num);
	p = (char *)&num;
	printf("Little Endian = %x\n",num);
	printf("Big Endian = ");
	for(i=0;i<4;i++)
	{
		printf("%x",*p);
		p++;
	}
	printf("\n");
}
