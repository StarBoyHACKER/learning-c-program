#include<stdio.h>
int main()
{
int n,r,sum=0,temp;
printf("Enter the number:\n");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
n=temp;
if(n==sum)
printf("number is a palindrome number");
else
printf("number is not a palindrome number");
return 0;
}
