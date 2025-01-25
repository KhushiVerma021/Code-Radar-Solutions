#include <stdio.h>
int main() {
    char c;
    scanf("%c",&g);
    switch(c){
        case 'R':
            printf("Stop");
            break;
        case 'G':
            printf("Go");
            break;
        case 'Y':
            printf("SLow Down");
            break;
        default:
            printf("Invalid input");            
    }




    return 0;
}