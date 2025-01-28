#include <stdio.h>

int main() {
    int x;
    int y;
    int z;
    scanf("%d ", &x);
    scanf("%d ", &y);
    scanf("%d\n", &z);
    x = (x + y + z)/ 3;
    printf("Average: %.2f", x,y,z,x);
    return 0;
}
