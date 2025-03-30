#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max= INT_MAX;
    int min= INT_MAX;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>max){
            min= max;
            max= arr[i];
        }
        
    }
    for(int i=0; i<=n-1; i++){
        printf("%d %d",min,max);
    }
    return 0;}