#include<stdio.h>
#include<stdlib.h>
int* push(int *start_ptr, int *top)
{
	int *ptr=NULL;
	if(start_ptr==NULL)
		ptr = (int*)calloc(1,sizeof(int));
	else
		ptr = (int*)realloc(start_ptr,sizeof(int)*((*top)+1));
	if (ptr==NULL)
		printf("\nno more memory is available currently.");
	else
	{
		(*top)+=1;
		start_ptr=ptr;
		printf("\nenter data: ");
		scanf("%d",&start_ptr[(*top)]);
	}
	return start_ptr;
}
int* pop(int *start_ptr, int *top)
{
	int *ptr=NULL;
	if(start_ptr==NULL)
		printf("\nstack empty. can not delete");
	else
	{	printf("\ncurrent top %d",start_ptr[(*top)]);
		(*top)-=1;
		printf("\nnew top %d",start_ptr[(*top)]);
		if((*top)!=-1)
			ptr = (int*)realloc(start_ptr,sizeof(int)*(*top));
		start_ptr=ptr;
	}
	return start_ptr;
}
void peek(int *start_ptr, int top)
{
	if(start_ptr==NULL)
		printf("\nstack empty.");
	else
	{
		printf("\nthe data %d is on top",start_ptr[top]);
	}
}
void display(int *start_ptr, int top)
{
	if(top==-1)
		printf("\nstack empty.");
	else
	{
		for(int i=top;i>-1;i--)
			printf("\ndata = %d",start_ptr[i]);
	}
}
int main()
{
	int top=-1,c;
	int *stack_ptr=NULL;
	do
	{
		printf("\nwelcome to stack operations");
		printf("\n1. PUSH");
		printf("\n2. POP");
		printf("\n3. PEEK");
		printf("\n4. DISPLAY");
		printf("\n0. Exit");
		printf("\nEnter ur choice: ");
		scanf("%d",&c);
		switch(c)
		{
			case 0:break;
			case 1:stack_ptr=push(stack_ptr,&top);
				break;
			case 2:stack_ptr=pop(stack_ptr,&top);
				break;
			case 3:peek(stack_ptr,top);
				break;
			case 4:display(stack_ptr,top);
				break;
			default:printf("\ninvalid option");
				break;
		}
	}while(c);
}
