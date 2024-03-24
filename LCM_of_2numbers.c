#include <stdio.h>
// Function to calculate greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b)
{
/* even if a>b then in first iteration they swap so it works 
works by dividing a by b and finding the remainder than the remainder is divided by previous b in next iteration
a is where the greatest common divisor value is stored */
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Function to calculate LCM
int Lcm(int a, int b) {
// Calculate LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b, c;
    printf("ENTER THE TWO NUMBERS : \n");
    scanf("%d %d", &a, &b);
    c = Lcm(a, b);
    printf("LCM OF %d AND %d IS %d",a,b, c);
    return 0;
}
