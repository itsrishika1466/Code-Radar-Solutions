#include<stdio.h>
int main() {
    int x,y,result;
    scanf("%d %d", &x, &y);
    char operator;
    scanf("%c", &operator);
    switch(operator){
        case '+':
            result = x+y; 
            printf("%d", result);
            break;
        case '-':
            result = x-y;
            printf("%d", result);
            break;
        case '*':
            result = x*y;
            printf("%d", result);
            break;
        case '/':
            result = x/y;
            printf("%d", result);
    }
    return 0;
}