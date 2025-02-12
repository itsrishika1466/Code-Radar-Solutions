#include<stdio.h>

int main() {
    int a, result;
    scanf("%d", &a);
    result = 1 << 31;
    if(a & result){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}