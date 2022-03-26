#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,desc,r1,r2,realpart,imgpart;
printf("Enter the coefficients of a, b and c :");
scanf("%
f%f%f",&a,&b,&c
if(a==0)
{
printf("Coefficient of a cannot be zero....
n");
printf("Please try again....
n");
return 1;
}
desc
=(b* b)--(4.0*a*
  if(
desc ==
{
printf("The roots are real and equal
n");
r1=r2=(
b)/(2.0*a);
printf("The two roots are r1=r2=%f
n",r1);
}
else if(
desc >
{
printf("The roots are real and distinct
n");
r1=(
b+sqrt desc ))/(2.0*
r2=(
b sqrt( desc ))/(2.0*
printf("The roots are r1=%f and r2=%f
n",r1,r2);
}
