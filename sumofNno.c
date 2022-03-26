#include <stdio.h>
int main()
{
int
num , count, sum =
printf("Enter a positive integer: ");
scanf("%d", &
num
// for loop terminates when
num is less than count
for(count = 1; count <=
num ; ++
{
sum += count;
}
printf("Sum = %d", sum);
return 0;
}
