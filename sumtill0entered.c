#include <stdio.h>
int main()
{
double number, sum = 0;
// the body of the loop is executed at least once
do
{
printf("Enter a number: ");
scanf("%f ", &number);
sum += number;
}
while
(number !=
printf("Sum = %.2lf",sum);
return 0;
}
