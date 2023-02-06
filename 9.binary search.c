#include<stdio.h>
int main()
{
	int i, key, n, first, last, mid, array[100];
	printf("Enter the number of elements : \n");
	scanf("%d", &n);
	printf("Enter %d elements in ascending order:\n", n);
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	printf("Enter the element to find:\n");
	scanf("%d",&key);
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(array[mid]<key)
		first=mid+1;
		else if(array[mid]==key)
		{
			printf("%d is found at %d position.\n",key,mid+1);
		    break;
		}
		else
		last=mid-1;
		mid=(first+last)/2;
	}
	if(first>last)
	printf("NOT FOUND! %d is not present in given elements.\n",key);
	return 0;
}
