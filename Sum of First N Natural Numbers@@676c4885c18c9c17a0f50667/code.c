#include<stdio.h>
int main() {
    int x,i=1,sum=0;
    scanf("%d", &x);
    while(i<=x){
        sum+=i;
        i++;
    }
    printf("%d", sum);
    return 0;
}