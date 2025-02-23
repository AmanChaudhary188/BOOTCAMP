#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void reverseStringRecursively(char str[], int start, int end) {
    if (start >= end) {
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseStringRecursively(str, start + 1, end - 1);
}

bool isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[50];
    
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    
    int length = strlen(str);
    
    char reversed[50];
    strcpy(reversed, str);

    reverseStringRecursively(reversed, 0, length - 1);
    
    printf("Reversed String is: %s\n", reversed);
    
    if (isPalindrome(str, 0, length - 1)) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }

    return 0;
}
