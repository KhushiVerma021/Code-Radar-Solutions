#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            printf(" ");
        }
        int a=1;
        for(int j=1; j<=i; j++){
            printf("%d ",a);
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}