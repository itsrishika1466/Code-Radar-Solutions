#include<stdio.h>
int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    char operator;
    scanf("%c", &operator);
    switch(operator){
        case '+':
            printf("%d", x+y);
            break;
        case '-':
            printf("%d", x-y);
            break;
        case '*':
            printf("%d", x*y);
            break;
        case '/':
            printf("%d", x/y);
    }
    return 0;
}