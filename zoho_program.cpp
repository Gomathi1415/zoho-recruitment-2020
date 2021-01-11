#include<stdio.h>

int main()
{
	int n;
	int i,j;
	printf("Enter the number \n");
	scanf("%d",&n);
	printf("\n Output \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
				printf("%d ",n-i);
			}
			else
			{
				printf("%d ",n-j);
			}
			
		}
		printf("\n");
	}
	
	
}
