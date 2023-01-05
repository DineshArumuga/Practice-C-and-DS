#include<stdio.h>
#include<string.h>
void own_memcpy(void *d,void *s,int num)
{
	int i;
	char *source = (char *)s;
	char *dest   = (char *)d;
	for(i=0;i<num;i++)
		dest[i] = source[i];
}

int main()
{
	char source[20],dest[20];
	int s[4]={10,20,30,40},d[4];
	int i;
	printf("Enter the Source string\n");
	scanf("%s",source);
	
	own_memcpy(dest,source,strlen(source)+1);
	own_memcpy(d,s,4*sizeof(int));
	
	printf("Source string = %s\n",source);
	printf("Destination string = %s\n",dest);
	
	printf("Destination Integar array = ");
	for(i=0;i<4;i++)
		printf("%d ",d[i]);
	printf("\n");

}
