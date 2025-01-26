#include <stdio.h>
int main() {
    int a;
    int b;
    char ch;
    scanf("%d %d %c",&a,&b,&ch);
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
            printf("%f",a/b);
            break;    
        default:
            printf("Error");    
    }
    return 0;
}