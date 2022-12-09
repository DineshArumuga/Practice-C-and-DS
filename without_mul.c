#include<stdio.h>
int main()
{
	int a,b,c,i;
	printf("Enter the Two number\n");
	scanf("%d%d",&a,&b);
	c=b;
	for(i=0;i<a-1;i++)
		b=b+c;
	printf("Mul = %d \n",b);
}
