// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int a=0;
    for(int i=0; i<=n-1; i++){
        if(arr[i]<arr[i+1]){
            a=1;
            
        }
        else{
            a=0;
        }
    }
    if(a==0){
        printf("Not Sorted");
    }
    else{
        printf("Sorted");
    }
    return 0;
}