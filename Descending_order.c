#include <stdio.h>
int main()
{
	int n,i,j,t;
	printf("Array size: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]<a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n\nDescending order is: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

