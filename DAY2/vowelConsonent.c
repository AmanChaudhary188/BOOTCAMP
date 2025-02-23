#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if (ch >= 65 && ch <= 90) { 
        ch += 32; 
    }
    if (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117) { 
        printf("The character '%c' is a vowel.\n", ch);
    }
    else if ((ch >= 97 && ch <= 122)) { 
        printf("The character '%c' is a consonant.\n", ch);
    } else {
        printf("The character '%c' is not an alphabet.\n", ch);
    }
    return 0;
}