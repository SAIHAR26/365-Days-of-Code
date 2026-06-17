#include<stdio.h>
int main()
{
int orgnum,num,rem,sum=0;
printf("Enter a number: ");
scanf("%d",&num);
orgnum=num;
 while(orgnum != 0)
    {
    rem=orgnum%10;
    sum += rem*rem*rem;
    orgnum /= 10;
    }
if(sum==num){
  printf("%d is an Armstrong number",num);}
else{
 printf("%d is not an Armstrong number",num);}
 return 0;
}