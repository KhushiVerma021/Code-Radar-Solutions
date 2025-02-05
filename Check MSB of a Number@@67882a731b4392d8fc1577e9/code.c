#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int mask= 1<<31;
    if(n && mask){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}