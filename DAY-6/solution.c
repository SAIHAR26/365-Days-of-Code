#include <stdio.h>
int main()
{
    int a, b;
    int min;
    int gcd = 1;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    if(a<b)
        min = a;
    else
        min = b;
    for(int i=1; i<=min; i++)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    printf("GCD = %d", gcd);

    return 0;
}