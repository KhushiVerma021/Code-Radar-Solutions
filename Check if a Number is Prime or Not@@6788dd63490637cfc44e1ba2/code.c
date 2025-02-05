#include <stdio.h>
int main(){
    int number,i=2,x=1;
    scanf("%d",&number);
    while(i<(number/2)){
        if (number%i==0){
            x=0;
            break;
        }
        i++;

    }
    if (x==0){
        printf("Not Prime ");
    }
    else{
        printf("Prime");
    }

    return 0;
}