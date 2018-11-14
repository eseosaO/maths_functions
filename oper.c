#include<stdio.h>
int main(){
int a, x, b = 2, count, sum =0 , min, max,subtract, multiply;
float divide, average;

printf("Please enter random number\n");
scanf("%d", &a);

printf("Please enter minimum\n");
scanf("%d", &min);

printf("Enter maximum\n");
scanf("%d", &max);

printf("enter %d number\n", max);
for(count = 1; count <= max; count++){
scanf("%d", &x);
sum = sum + x;
}

average = (float)sum/max;
subtract = a - b;
multiply = a * b;
divide = (float)a / b; 
printf("Sum of the numbers = %d\n", sum);
printf("Average of the numbers = %.2f\n", average);
printf("difference btw a and b = %d\n", subtract);
printf("multiplication of a and b = %d\n", multiply);
printf("Division of a by b = %.2f\n", divide);
return 0;
}
