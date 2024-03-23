#include <stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2,d,b2;
	//quadratic formula x={(-b+d)/(2*a),(-b-d)/(2*a)}
	//d=sqrt(b^2-(4*a*c))
	//if d=0 solutions are real and have same values
	//also if d>0 solutions are real and have different values
	//else they are imaginary
	
	printf("\nQUADRATIC EQUATION IS OF FORM ax^2+bx+c=0 \n\n");
	printf("ENTER THE VALUE OF a : ");
	scanf("%f",&a);
	printf("ENTER THE VALUE OF b : ");
	scanf("%f",&b);
	printf("ENTER THE VALUE OF c : ");
	scanf("%f",&c);
	b2=pow(b,2);
	if(b2-4*a*c < 0)
	{
		printf("ITS ROOTS ARE IMAGINARY !");
	}
	else
	{
		d=sqrt(b2-(4*a*c));
		if(d==0)
		{
			printf("\nROOTS ARE REAL AND ARE SAME ");
		}
		else
		{
			printf("\nROOTS ARE REAL AND ARE DIFFERENT ");
		}
		x1=(-b+d)/(2*a);
		x2=(-b-d)/(2*a);
		printf("\nFIRST ROOT = %.2f",x1);
		printf("\nSECOND ROOT = %.2f",x2);
	}
	return 0;
}
