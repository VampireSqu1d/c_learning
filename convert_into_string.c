#include <stdio.h>

void main() {
    int a;
    float b;
    char my[20];

    b = 31.9699999999;
    a = 651;

    sprintf(my, "H:%d, T:%1.2f", a, b);
    //sprintf(my, "%1.2f", b);

    puts(my);
}
