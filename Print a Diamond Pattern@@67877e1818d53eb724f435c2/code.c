#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int nst=1;
    int nsp=n/2;
    for(int i=1; i<=n; i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1; j<=nst;j++){
            printf("* ");
        }
        if(i<(n+1)/2){
            nsp--;
            nst=nst+2;
        }else{
            nsp++;
            nst=nst-2;
        }
        printf("\n");
    }
    return 0;
}