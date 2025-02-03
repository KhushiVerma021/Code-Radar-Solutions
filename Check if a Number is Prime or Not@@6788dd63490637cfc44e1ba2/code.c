#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==2){
        printf("Prime");
    }
    else if(n>2){
        int i;
        for(i=3; i<=n; i++){
            if (n%i==0){
                printf("Not Prime");
                break;
            }
            else if (i>n/2){
                printf("Prime");
            }
        }
        }
    else{
        printf("Not Prime");
    }
    return 0;
}