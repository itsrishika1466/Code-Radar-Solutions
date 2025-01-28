#include <stdio.h>

int main() {
    int x;
    int y;
    int z;
    scanf("%d\n", &x);
    scanf("%d\n", &y);
    scanf("%d\n", &z);
    x = (x + y + z)/ 2;
    printf("Average: %d", x);
    return 0;
}
