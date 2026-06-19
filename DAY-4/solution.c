#include <stdio.h>
int main() 
{
    int terms;
    int a = 0, b = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);
    printf("Fibonacci Sequence: ");
    for (int i = 1; i <= terms; i++) 
    {
        printf("%d ", a);    
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    printf("\n");
    return 0;
}