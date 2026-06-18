#include<stdio.h>
int main()
{
   int n,isprime=1;
   printf("Enter a positive integer:");
    scanf("%d",&n);
    if(n < 1)
   {
    printf("Invalid input.\n");
    return 1;
   }
    if(n<=1){
        isprime=0;  
    } else {
        
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                isprime=0;
                break;
            }
        }
    }
    if(isprime==1){
        printf("%d is a prime number.\n",n);
    } else {
        printf("%d is not a prime number.\n",n);
    }
    return 0;
}