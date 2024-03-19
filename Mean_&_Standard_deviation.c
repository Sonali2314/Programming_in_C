#include<stdio.h>
#include<math.h>
int main()
{
int n,i; 
float sum=0.0,mean, std_dev, variance=0.0;

printf("Enter the number of elements: \n");
scanf("%d",&n); 

float arr[n];

printf("Enter the elments: ");
for (i=0;i<n;i++)
{
 	scanf("%f",&arr[i]);
	sum +=arr[i];
}
mean=sum/n;

for (i=0;i<n;i++)
{
 	variance +=pow(arr[i]-mean,2);
}
std_dev = sqrt(variance /n);

printf("Mean = %f\n", mean);
printf("Standard Deviation = %f",std_dev);
}
