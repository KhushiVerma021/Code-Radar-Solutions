#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    int i;
    scanf("%d",&i);
    int mask= 1<<(i-1);
    int y= x|mask;
    printf("%d",y);
    return 0;
}