#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d",&a,&b);
    int num= (a>>b)&1;
    printf("%d",num);

    return 0;
}