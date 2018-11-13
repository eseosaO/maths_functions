#include<stdio.h>
int main(){
int a, b, sum, subtract, multiply;
float divide;
printf("What two numbers do you want to add? \n");
scanf("%d %d", &a, &b);
sum = a + b;
subtract = a - b;
multiply = a * b;
divide = a / b; 
printf("Sum of the numbers = %d\n", sum);
printf("difference btw the numbers = %d\n", subtract);
printf("multiplication of the numbers = %d\n", multiply);
printf("Division of first number by second number = %.2f\n", divide);
return 0;
}
