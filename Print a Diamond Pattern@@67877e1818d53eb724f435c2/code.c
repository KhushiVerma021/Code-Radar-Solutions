#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,limit=1;
    scanf("%d",&n);
    for(int i=1; i<=2*n-1; i++){
        for(int j=1;j<=abs(n-i);j++){
            printf(" ");
        }
        for(int k=1; k<=2*limit;k++){
            printf("*");
        }
        if(i<n){
           limit++;
        }else{
            limit--;
        }
        printf("\n");
    }
    return 0;
}