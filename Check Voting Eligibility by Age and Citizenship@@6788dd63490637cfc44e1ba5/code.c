#include <stdio.h>
int main() {
    int age;
    int cs;
    scanf("%d %d",&age,&cs);
    if(age>=18){
        if(cs==1){
            printf("Eligible");
        }else{
            printf("Not Eligible");
        }
    }else{
        printf("Not Eligible");
    }

    return 0;
}