#include <stdio.h>

int main()
{
    int a, b;
    int min;
    int gcd = 1;
    int lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < b)
        min = a;
    else
        min = b;

    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    lcm = (a * b) / gcd;

    printf("LCM = %d", lcm);

    return 0;
}