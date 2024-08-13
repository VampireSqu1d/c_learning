#include<stdio.h>

void main() {
    int a, fact, i;
    fact = 1;
    printf("Please enter a number for wich factorial is to be calculated\n");
    scanf("%d", &a);

    for(i = 1; i<= a; i++) {
        fact = fact * i;
    }

    printf("\nFactorial of %d is equal to: %d\n", a, fact);
}
