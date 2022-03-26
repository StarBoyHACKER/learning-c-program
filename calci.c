#include <stdio.h>
int main(){
char ch;
int a, b, result;
// Asking for Input
printf("Enter an Operator (+, *, *, /): ");
scanf("%c", &ch);
printf("Enter two operands:
n");
scanf("%d %d", &a, &b);
switch(ch)
{
case '+':
result = a + b;
break;
case '
result = a
b;
break;
case '*':
result = a * b;
break;
case '/’:
if(b==0)
{
printf(“Division by zero error
n");
}
else
{
result = a / b;
}
break;
default:
printf("
n Enter correct option n");
break;
}
printf("Result = %d", result);
return 0;
}
