#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1, stack[size];
void push();
void pop();
void peek();
int main()
{
	int choice;
	while(1)
	{
		printf("\nOperations performed by stack are:\n");
		printf("\n 1. PUSH\n 2. POP\n 3. PEEK\n 4. EXIT\n");
		printf("\nEnter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: peek();
			break;
			case 4:
				exit(0);
			default:
				printf("Enter a valid choice\n");
		}
	}
}
void push()
{
	int x;
	if(top==size-1)
	{
		printf("\n Stack Overflow!\n");
	}
	else
	{
		printf("Enter the element to be inserted:\n");
		scanf("%d",&x);
		top=top+1;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\n Stack Underflow!");
	}
	else
	{
		printf("Popped element is %d\n",top);
		top=top-1;
	}
}
void peek()
{
	if(top==-1)
	{
		printf("\n Stack Underflow!!");
	}
	else
	{
		printf("\nThe elements present in the stack are:\n");
		for(int i=top;i>=0;--i)
		printf("%d\n",stack[i]);
	}
}
