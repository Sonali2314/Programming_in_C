#include<stdio.h>
int main()
{
	/* 
	the operation "++x" referred to as "pre-increment."
	while "x++" is "post increment"
	Pre-increment (++x): Increase the value of a variable by 1 before using it in an expression.
    Post-increment (x++): Increase the value of a variable by 1 after using it in an expression.
    */
    int x=4,y=2,w,z;
    z=x++; // value of x is assigned first then incremented
    w=++x; // value incremented first then assigned
    printf("z=%d ,w=%d ,x=%d \n",z,w,x);
    w=x-- + ++y;
    printf("x=%d ,y=%d ,z=%d \n",x,y,z);
    return 0;
    
	
}
