#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a=n>>31;
    if(a==1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}