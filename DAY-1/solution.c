#include<stdio.h>
int main()
{
    int num,orgnum,rem,revnum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    orgnum=num;
    while(num!=0)
    {
        rem=num%10;
        revnum=revnum*10+rem;
        num /= 10;
    }
    if(orgnum==revnum){
        printf("%d is a palindrome",orgnum);
    }
    else{
        printf("%d is not a palindrome",orgnum);
    }
}