#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0; i<=n-1; i++){
        if(arr[i]<arr[i+1]){
            max= arr[i+1];
        }
    }
    printf("%d",max);
}