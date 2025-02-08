#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int i;
    scanf("%d",&i);
    n|= (1<<i);
    printf("%d",n);
    return 0;
}