#include <stdio.h>

int main() {
    float x;
    float y;
    float z;
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);
    x = (x + y + z)/ 3;
    printf("Average: %.2f", x);
    return 0;
}
