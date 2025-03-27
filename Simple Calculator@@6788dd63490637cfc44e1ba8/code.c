#include<stdio.h>
int main() {
    int x,y,result;
    char sign;
    scanf("%d %d %c", &x, &y, &sign);
    switch(sign){
        case '+':
            result = x + y; 
            printf("%d", result);
            break;
        case '-':
            result = x - y;
            printf("%d", result);
            break;
        case '*':
            result = x * y;
            printf("%d", result);
            break;
        case '/':
                result = x / y;
                if(x / y == 0){
                    printf("Error");
                }
                printf("%d", result);
            }
            break;
        default:
            printf("invalid");
    }
    return 0;
}