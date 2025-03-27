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
            if(y!=0){
                result = x / y;
                printf("%d", result);
            }
            else{
                printf("Error");
            }
            break;
        default:
            printf("invalid");
    }
    return 0;
}