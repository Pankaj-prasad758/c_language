#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    printf("Enter first string ");
    gets(str1);
    printf("Enter second sting ");
    gets(str2);
    strcat(str1, str2);
    printf("concatenated string is %s", str1);
    return 0;
}