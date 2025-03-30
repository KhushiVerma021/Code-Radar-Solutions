// Your code here...
#include <stdio.h>
int isprime(int num){
    if(num<=1){
        return 0;
    }
    else{
        for(int i=2; i*i<=num; i++){
            if(num%i==0){
                return 0;
            }
            
        }
        return 1;
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1; i++){
        scanf("%d",&arr[i];)
    }
    int count=0;
    for(int i=0; i<=n-1; i++){
        if(isprime(arr[i])){
            count++;
        }

        }
        return 0;
    }