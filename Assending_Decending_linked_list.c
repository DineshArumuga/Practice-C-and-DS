//Create a linked list and sort the data in both assending and decending order

#include<stdio.h>
#include<stdlib.h>
typedef struct order
{
	int data;
	struct order *next;
}SO;

void init_linked_list(SO **ptr)
{
	SO *temp = (SO *)malloc(sizeof(SO));
	printf("Enter the data \n");
	scanf("%d",&temp->data);
	if(*ptr == 0)
	{
		temp->next = *ptr;
		*ptr = temp;
	}
	else
	{
		SO *last = *ptr;
		while(last->next != 0)
			last = last->next;
		temp->next = last->next;
		last->next = temp;
	}
}

void display(SO *ptr)
{
	while(ptr != 0)
	{
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

void asscending_order(SO *ptr)
{
	SO *temp = ptr;
	int tem;
	while(ptr->next != 0)
	{
		temp = ptr->next;
		while(temp!=0)
		{
			if((ptr->data)>(temp->data))
			{
				tem = temp->data;
				temp->data = ptr->data;
				ptr->data = tem;
			}
			temp = temp->next;
		}
		ptr = ptr->next;
	}
}

void descending_order(SO *ptr)
{
        SO *temp = ptr;
        int tem;
        while(ptr->next != 0)
        {
                temp = ptr->next;
                while(temp!=0)
                {
                        if((ptr->data)<(temp->data))
                        {
                                tem = temp->data;
                                temp->data = ptr->data;
                                ptr->data = tem;
                        }
                        temp = temp->next;
                }
                ptr = ptr->next;
        }
}

int main()
{
	SO *hptr = 0;
	int num,i;
	printf("Enter the Number of a node U want \n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
		init_linked_list(&hptr);
	display(hptr);
	asscending_order(hptr);
	printf("Assecnding order = ");
	display(hptr);
	descending_order(hptr);
	printf("Descending order = ");
	display(hptr);
}







