#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,ch,arr[100],pos,ele;
	do
	{
		printf("Enter the size of the array:\n");
		scanf("%d",&n);
		printf("Enter the elements in the array:\n");
		for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		printf("1. Insertion\n");
		printf("2. Deletion\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the position of the element: ");
				scanf("%d",&pos);
				printf("\nEnter the element to be inserted: ");
				scanf("%d",&ele);
				if(pos>n)
				{
					printf("\n INVALID INPUT \n");
				}
				else
				{
					for(i=n-1;i>=pos-1;i--)
					arr[i+1]=arr[i];
					arr[pos]=ele;
					printf("Array after Insertion\n");
					for(i=0;i<=n;i++)
					printf("%d\n",arr[i]);
				}
				break;
			case 2:
				printf("Enter the position of the element: ");
				scanf("%d",&ele);
				if(pos>n)
				{
					printf("\nCANNOT BE DELETED\n");
				}
				else
				{
					for(i=pos;i<n;i++)
					arr[i]=arr[i+1];
					printf("Array after Deletion\n");
					for(i=0;i<=n-2;i++)
					printf("%d\n",arr[i]);
				}
				break;
			case 3:
				printf("The Array is Displayed as:\n");
				for(i=0;i<=n-1;i++)
				printf("%d\n",arr[i]);
				break;
			case 4:
				exit(0);
			default:
				printf("Enter a valid input from 1 to 4\n");
		}   
	}
	while(ch>0 && ch<=4);
}
