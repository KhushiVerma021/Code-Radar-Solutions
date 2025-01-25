#include <stdio.h>

int main() {
    int g;
    scanf("%d",&g);
    if(g>=90 && g<=100){
        printf("A");
    }
    else if(g>=80 && g<90){
        printf("B");
    }
    else if(g>=70 && g<80){
        printf("C");
    }
    else if(g>=60 && g<70){
        printf("D");
    }else{
        printf("F");
    }
    return 0;
}