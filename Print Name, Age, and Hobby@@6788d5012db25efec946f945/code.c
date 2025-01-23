#include <stdio.h>

int main() {
    char str1[10];
    int age;
    char str2[15];
    scanf("%s %d %s",&str1,&age,&str2);

    printf("%Name: %s\nAge: %d\nHobby:%s",str1,age,str2);
    return 0;
}