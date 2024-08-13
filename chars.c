#include <stdio.h>

int main() {
    int i;
    char my[20];

    printf("Enter chars: ");
    for (i = 0; i < 20; i++) {
        scanf("%1c", &my[i]);
    }


    for (i = 0; i < 20; i++) {
        printf("%c", my[i]);
    }
    printf("\n");

    return 0;
}
