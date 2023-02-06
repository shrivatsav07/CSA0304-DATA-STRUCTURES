#include<stdio.h>
int main()
{
	int a[100], i, search, num;
	
	printf("Enter the number of elements in array:\t");
	scanf("%d",&num);
	printf("Enter %d numbers in array\n",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search:");
	scanf("%d",&search);
	
	for(i=0;i<num;i++)
	{
		if(a[i]==search)
		{
			printf("The number %d is present at %d position.\n", search, i+1);
			break;
		}
	}
	if(i==num)
	{
		printf("The number %d is not present in the array\n",search);
	}
	return 0;
}
