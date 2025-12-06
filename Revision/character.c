# include <stdio.h>

int main() {
    char ch;
    printf("Enter character");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("UpperCase : %c", ch);
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("LowerCase : %c", ch);
    }
    else{
        printf("not a character : %c", ch);
    }
    return 0;
}
