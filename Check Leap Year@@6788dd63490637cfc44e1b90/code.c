#include <stdio.h>

int main() {
    int y;
    scanf("%d",&y);
    if(y%4==0 && y%400==0){
        printf("Leap Year");
    }
    else (y%100!=0){
        printf("Leap Year");
    }
    return 0;
    }
    printf("%s", welcome());
    return 0;
}