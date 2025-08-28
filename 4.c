//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
int main(){
    int r;
    printf("Enter radious of circle=");
    scanf("%d",&r);
    float area = 3.14*(r*r);
    printf("Area of circle is: %f",area);
    float circumference =2*3.14*r;
    printf("Circumference of circle is: %f",circumference );
    return 0;
}