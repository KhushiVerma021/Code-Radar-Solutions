#include <stdio.h>

int main() {
    int num;
    int n;
    scanf("%d %d",&num,&n);
    num= num&(num-1);
    printf("%d",num);


    return 0;
}