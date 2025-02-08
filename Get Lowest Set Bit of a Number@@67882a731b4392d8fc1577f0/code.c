#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int n= num & (-num);
    printf("%d",n);



    return 0;
}







