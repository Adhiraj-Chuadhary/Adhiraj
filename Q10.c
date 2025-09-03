//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main(){
    int fullseconds,hours,minutes,second;
    printf("enter total numbers ");
    scanf("%d",&fullseconds);
    hours  = fullseconds/3600;
    minutes = (fullseconds%3600)/60;
    second = (fullseconds%60);
    printf("Time=%d:%d:%d",hours , minutes , second);
    return 0;
}