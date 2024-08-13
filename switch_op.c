#include<stdio.h>

void main() {
    int a1, a2;
    int result;
    char op;
    int valid = 1;
    printf("enter first number: ");
    scanf("%d", &a1);
    printf("\nEnter second number: ");
    scanf("%d", &a2);
    printf("\nEnter the expected operation + - / * \n");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            result = a1 + a2;
            break;
        case '-':
            result = a1 - a2;
            break;
        case '/':
            result = a1 / a2;
            break;
        case '*':
            result = a1 * a2;
            break;
        default:
            printf("invalid operator entered\n");
            valid = 0;
            break;

    }

    if (valid == 1){
        printf("the result of operation %d %c %d = %d \n",a1, op, a2, result);
    }
    else {
        printf("input not valid :c\n");
    }

}
