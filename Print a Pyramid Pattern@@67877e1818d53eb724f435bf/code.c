#include <stdio.h>

int main() {
    int r;
    scanf("%d",&r);
    for(int i=1; i<=r;i++){
        for(int k=0;k<=i-1; k++){
            printf(" ");
        }
        for(int j=1;j<=((2*r)-1);j++){
            printf("*");
        }printf("\n");
    }
    return 0;
}