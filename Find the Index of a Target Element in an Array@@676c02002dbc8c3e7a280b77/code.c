// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int T;
    int a;
    int count=0;
    scanf("%d",&T);
    for(int i=0; i<=n-1; i++){
        if(arr[i]=T){
            printf("%d",i);
        }
        else{
            printf("-1");
        }
    }
    return 0;
}