#include<stdio.h>

int main() {
    int a, b, c;
    printf(" enter two numbers\n");
    scanf("%d%d", &a, &b);
    c=a%b;
    printf(" remainder is %d", c);
    return 0;
    
}