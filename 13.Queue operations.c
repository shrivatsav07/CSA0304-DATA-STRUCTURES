#include<stdio.h>
#include<stdlib.h>
#define size 5
int que[20];
int i,f=-1,r=-1;

void enqueue()
{
	int ele;
	printf("Enter the element to be inserted : ");
	scanf("%d",&ele);
	if(r==size-1)
	{
	    printf("QUEUE IS FULL\n");
	}
	else if(f==-1 && r==-1)
	{
		f=0;
		r=0;
		que[r]=ele;
	}
	else
	{
		r=r+1;
     	que[r]=ele;
	}
}

void dequeue()
{
	if(r==-1 && f==-1)
	printf("QUEUE IS EMPTY\n");
	
	else
	{	
		f=f+1;
	}
}

void display()
{
	if(r==-1 && f==-1)
	printf("QUEUE IS EMPTY\n");
	else
	{
		for(i=f;i<=r;i++)
		printf("%d\t",que[i]);
	}
}

int main()
{
	int ch;
	do
	{
		
	printf("\nTHE QUEUE OPERATIONS ARE:\n");
	printf(" 1.ENQUEUE\n 2.DEQUEUE\n 3.DISPLAY\n 4.EXIT\n");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			printf("\nENTER A VALID CHOICE\n");
	}
}while(ch>0 && ch<=4);
}
