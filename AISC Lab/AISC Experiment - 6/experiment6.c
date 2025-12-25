#include<stdio.h>
void main()
{
	int i,j,m1,n1,m2,n2,c,k;
	float R[50][50],S[50][50],T[50][50],U[50][50],a[50];
	printf("Enter the number of rows and columns of matrix R: ");
	scanf("%d %d",&m1,&n1);
	printf("Enter the Elements:\n");
	for(i=0;i<m1;i++)
	{
			for(j=0;j<n1;j++)
		{
			scanf("%f", &R[i][j]);
		}
	}
	printf("\nEnter the number of rows and columns of matrix S: ");
	scanf("%d %d",&m2,&n2);
	printf("Enter the Elements:\n");
	for(i=0;i<m2;i++)
	{
			for(j=0;j<n2;j++)
		{
			scanf("%f", &S[i][j]);
		}
	}
	if(n1!=m2)
	{
		printf("Cartesian product can't be determined.");
	}
	printf("\nCartesian Product on Fuzzy Relation using:\n\n1. Max-Min Composition\n2. Max-Product Composition\n Enter your choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			for(i=0;i<m1;i++)
			{
				for(j=0;j<n2;j++)
				{
					for(k=0;k<m2;k++)
					{
						if(R[i][k]>=S[k][j])
						{
							a[k]=S[k][j];
						}
						else if(R[i][k]<=S[k][j])
						{
							a[k]=R[i][k];
						}
					}
					for(k=1;k<m2;k++)
					{
						if(a[0]<a[k])
							a[0]=a[k];
					}
					T[i][j]=a[0];
				}
	}
	printf("\nThe Max-Min of R and S is T:\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf(" %f",T[i][j]);
		}
		printf("\n");
	}
		break;
	case 2:
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
				{
					for(k=0;k<m2;k++)
					{
						a[k]=R[i][k]*S[k][j];
					}
					for(k=1;k<m2;k++)
					{
						if(a[0]<a[k])
						a[0]=a[k];
					}
					U[i][j]=a[0];
				}
	}
	printf("\nThe Max-Product of R and S is U:\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf(" %f",U[i][j]);
		}
		printf("\n");
	}
	break;
	default:
	printf("Please choose correct option.");
	}
}