#include<stdio.h>
int main()
{
	int m,n,p,q,i,j,k;
	int a[10][10], b[10][10], res[10][10];
	
	printf("Enter the order of 1st Matrix:\n");
	scanf("%d%d",&m, &n);
	printf("Enter the order of 2nd Matrix:\n");
	scanf("%d%d",&p, &q);
	
	if(n!=p)
	{
		printf("Matrix is incompatible for Multiplication!\n");
	}
	else
	{
		printf("Enter the elements of 1st Matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
		
		printf("Enter the elements of 2nd Matrix:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d", &b[i][j]);
			}
		}
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				res[i][j]=0;
				for(k=0;k<p;k++)
				{
					res[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		
		printf("The product of two Matrices is : \n");
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d\t", res[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
