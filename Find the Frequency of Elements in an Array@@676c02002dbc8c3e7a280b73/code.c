// Your code here...

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(int i=0; i<=n-1; i++){
        int count=1;
        for(int j=i+1; j<=n-1; j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
    }
    for(int i=0; i<n; i++){
        if(freq[i]!=0){
            printf("%d",freq[i]);
        }
    }
    return 0;
}