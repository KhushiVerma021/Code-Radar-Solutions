#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    num= num & -num;
    printf("%d",num);



    return 0;
}







