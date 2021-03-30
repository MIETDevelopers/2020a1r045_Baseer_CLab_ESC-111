#include<stdio.h>

int main() {

    int a, b, sum, sub, div, mul;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);    
    // addition of two numbers
    sum=a+b;
    printf("result is %d\n",sum);
    //subtraction of two number
    sub=a-b;
    printf("result is %d\n",sub);
    //division of two numbers
    div=a/b;
    printf("result is %d\n",div);
    //multiplication of two numbers
    mul=a*b;
    printf("result is %d\n",mul);

    return 0;
}


