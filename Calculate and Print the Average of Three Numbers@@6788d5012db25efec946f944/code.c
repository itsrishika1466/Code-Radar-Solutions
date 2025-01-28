#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    x = (x + y + z)/ 3;
    printf("Average: %.2f", x,y,z);
    return 0;
}
