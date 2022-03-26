#include<stdio.h>
int main()
{
int i,n,r;
long int x,y,z,nCr; // factorial of a number may cross the range of the integer,so used long int data type.
printf("enter the value of n and r:\n");
scanf("%d %d", &n, &r);
x=y=z=1;
//calculate x as factorial n
for(i=n;i>=1;i--)
{
x=x*i;
}
//calculate y as factorial (n r)
for(i=n-r;i>=1;i--)
{
y=y*i;
}
//calculate z as factorial r
for(i=r;i>=1;i--)
{
z=z*i;
}
//Using x,y,z calculate binomial coefficient nCr
nCr=x/(y*z);
printf("%dC%d=%d",n,r,nCr);
return 0;
}
