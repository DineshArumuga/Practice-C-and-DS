#include<stdio.h>
int swap_bit(int num,int pos1,int pos2)
{
	int i,j;
	i = (num>>pos1)&1;
	j = (num>>pos2)&1;
	if(i!=j)
	{
	num = num^(1<<pos1);
	num = num^(1<<pos2);
	}

	return num;
}
int main()
{
	int i,num,pos1,pos2,num1;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	for(i=31;i>=0;i--)
		printf("%d ",(num>>i)&1);
	printf("\n");
	
	printf("Enter the position 1 and position 2\n");
	scanf("%d%d",&pos1,&pos2);
	
	int (*fp)(int,int,int) = swap_bit;
	num1 = fp(num,pos1,pos2);
	
	for(i=31;i>=0;i--)
		printf("%d ",(num1>>i)&1);
	printf("\n");
}
