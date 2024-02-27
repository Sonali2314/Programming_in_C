//print a to z using loop
#include<stdio.h>
int main ()
{
	char c;
	printf("SMALL ALPHABETS \n");
	for(c='a';c<='z';c++)
	{
		printf("%c \t",c);
	}
	printf("\nCAPITAL ALPHABETS \n");
	for(c='A';c<='Z';c++)
	{
		printf("%c \t",c);
	}
}
