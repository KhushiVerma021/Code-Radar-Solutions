#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%[^\n]s",str);
    int x= strlen(str);
    printf("%d",x);
    return 0;
}