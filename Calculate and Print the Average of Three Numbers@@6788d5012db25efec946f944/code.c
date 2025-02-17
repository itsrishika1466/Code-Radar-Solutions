#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    float m = (x + y + z)/ 3;
    printf("Average: %.2f", m);
    return 0;
}
