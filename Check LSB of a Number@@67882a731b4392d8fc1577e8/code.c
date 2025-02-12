#include<stdio.h>

int main() {
    int a, num;
    scanf("%d", &a);
    //num = a & 1;
    if( a & 1) {
       printf("Set"); 
    }
    else{
        print("Not Set");
    }
    return 0;
}