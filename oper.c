#include<stdio.h>

int mod(int x, int y){
return (x % y);
}

int maxi(int n1, int n2){
return (n1 > n2) ? n1 : n2;
}

int mini(int n1, int n2){
return (n1 > n2) ? n2 : n1;
}

int main(){
int a, x, low, high , b = 2, count, sum =0 , min, max,subtract, multiply;
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
low = mini(x, low);
high = maxi(high, x);
}


average = (float)sum/max;
subtract = a - b;
multiply = a * b;
divide = (float)a / b;
 
printf("Sum of the numbers = %d\n", sum);
printf("Average of the numbers = %.2f\n", average);
printf("Difference btw a and b = %d\n", subtract);
printf("Multiplication of a and b = %d\n", multiply);
printf("Division of a by b = %.2f\n", divide);
printf("Remainder value between a and b is %d\n", mod(a,b));
printf("Highest value amongst entered values is %d\n", high);
printf("Lowest value amongst entered values is %d\n", low);
return 0;
}
