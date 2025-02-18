#include<stdio.h>
int main() {
    int x,i,sum;
    scanf("%d", &x);
    for(i=1;i<=x;i++){
        sum+=i;
        i++;
    }
    printf("%d", sum);
    return 0;
}