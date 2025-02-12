#include<stdio.h>

int main() {
    int a, result;
    scanf("%d", &a);
    result = 1 << a;
    printf("%d", result);
    return 0;
}