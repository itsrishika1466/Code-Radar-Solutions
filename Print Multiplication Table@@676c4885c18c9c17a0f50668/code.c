#include<stdio.h>
int main() {
    int x, i, y;
    scanf("%d", &x);
    for(i=1;i<=10;i++){
        //y = x * i;
        printf("%d x %d = %d\n", x, i, x*i);
    }
    return 0;
}