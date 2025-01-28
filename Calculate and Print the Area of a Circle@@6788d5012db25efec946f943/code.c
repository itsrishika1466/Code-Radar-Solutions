#include <stdio.h>

int main() {
    float x;
    scanf("%f", &x);
    x = 3.14 * x * x;
    printf("Area: %f", x);
    return 0;
}