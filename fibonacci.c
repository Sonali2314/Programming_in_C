//Fibonacci series
#include<stdio.h>
int main()
{
	int a,b,c,n,i;
	printf("ENTER THE NUMBER OF TERMS : ");
	scanf("%d",&n);
	a=0;
	b=1;
	c=a+b;
	printf("%d\t",a);
	printf("%d\t",b);
	for(i=0;i<n-2;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf("%d\t",c);
	}
}
