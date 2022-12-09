#include<stdio.h>
char* string_rev(char *,int ,int);
int main()
{
	int len;
	char s[20];
	printf("Enter the string\n");
	scanf("%s",s);
	printf("Before String = %s\n",s);
	for(len=0;s[len];len++);
	string_rev(s,0,len-1);
	printf("After Reverse String = %s\n",s);
	
}
char* string_rev(char *p,int i,int j)
{
/*
	int i,j,len,temp;
	for(len=0;p[len];len++);
	for(i=0,j=len-1;j>i;i++,j--)
	{
		temp = p[i];
		p[i] = p[j];
		p[j] = temp;
	}
*/
	char temp;
	if(j>i)
	{
		temp = p[i];
		p[i] = p[j];
		p[j] = temp;
		return string_rev(p,++i,--j);
	}
	return p;
}
