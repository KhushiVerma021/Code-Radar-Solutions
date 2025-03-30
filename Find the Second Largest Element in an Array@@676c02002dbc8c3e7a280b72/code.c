// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i]);
    }
    int max= INT_MIN;
    int smax= INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>max){
            smax= max;
            max= arr[i];
        }
        else if(arr[i]!= max && arr[i]>smax){
            smax= arr[i];
        }
        
    }
    if(smax== INT_MIN){
        printf("-1");
    }
    else{
        printf("%d",smax);
    }
    return 0;

}









