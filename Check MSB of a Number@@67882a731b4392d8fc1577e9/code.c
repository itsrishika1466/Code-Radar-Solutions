#include<stdio.h>

int main() {
    int a, result;
    scanf("%d", &a);
    result = 1 << a;
    if(result){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}