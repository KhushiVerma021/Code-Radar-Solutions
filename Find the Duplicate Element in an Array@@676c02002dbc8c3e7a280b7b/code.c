#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=n-1; i++){
        for(int j= i+1; j<=n-1; j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[j]);
            }


        }
    }
    return 0;
    
}