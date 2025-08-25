#include<Stdio.h>
int main (){
    int a , b;
    printf("enter first numbers");
    scanf("%d",&a);
    printf("enter second numbers");
    scanf("%d", &b);
    int sum , difference , product , quotient ;
    
    sum = a+b;
    difference = a-b;
    product=a*b;
    quotient=a/b;
    printf("sum=%d\n",sum);
    printf("difference=%d\n",difference);
    printf("product=%d\n",product);
    printf("quotient=%d\n",quotient);
    return 0;
}