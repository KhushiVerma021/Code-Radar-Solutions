#include <stdio.h>
int main() {
    float a;
    float b;
    char ch;
    scanf("%f %f  %c",&a,&b,&ch);
    switch(ch){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);       
            break;
        case '/':
            printf("%d",a/b);
            break;    
        default:
            printf("Error");    
    }
    return 0;
}