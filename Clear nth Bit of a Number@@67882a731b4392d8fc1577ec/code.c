#include <stdio.h>

int main() {
    int num;
    int n;
    int bit;
    scanf("%d %d",&num,&n);
    num= num& ~(1<<n);
    printf("%d",num);


    return 0;
}