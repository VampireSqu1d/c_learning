#include<stdio.h>
void main() {
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d", &a);

    printf("\nthe value of a is %d\n", a);

    printf("Enter the value of b:");
    scanf("%d", &b);

    printf("\nthe value of a is %d\n", b);

    c = a+b;
    printf("the value of %d + %d is equal to : %d\n",  a, b, c);
}