#include <stdio.h>

int main() {
    int x;
    int y;
    int z;
    float average;
    scanf("%d ", &x);
    scanf("%d ", &y);
    scanf("%d\n", &z);
    x = (x + y + z)/ 3.0;
    printf("Average: %.2f", x);
    return 0;
}
