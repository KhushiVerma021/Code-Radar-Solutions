#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    
    if(n<=1){
        printf("Not Prime");
    }
    else if(n==2){
        printf("Prime");
    }
    else{
        int i;
        for(int i=2; i<=n; i++){
            if (n%i==0){
                printf("Not Prime");
                break;
            }
            if(i>n/2){
                printf("Prime");
            }
        }
        }

    return 0;
}