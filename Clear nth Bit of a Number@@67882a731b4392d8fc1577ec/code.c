#include <stdio.h>

int main() {
    int num;
    int n;
    scanf("%d %d",&num,&n);
    int mask= 1<<n;
    num=num^mask;
    printf("%d",num);


    return 0;
}