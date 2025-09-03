//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>  
int main() {
    float principal, rate, time, SI, CI, amount;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest: ");
    scanf("%f", &rate);
    printf("Enter Time : ");
    scanf("%f", &time);
    SI = (principal * rate * time) / 100;
    amount = principal * pow((1 + rate / 100), time);
    CI = amount - principal;
    printf("Simple Interest = %f\n", SI);
    printf("Compound Interest = %f\n", CI);
    return 0;
}