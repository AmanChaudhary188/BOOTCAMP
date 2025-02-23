#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool stringAnagram(char str1[], char str2[]) {
    int sum1 = 0;
    int sum2 = 0;

    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    for (int i = 0; i < strlen(str1); i++) {
        sum1 = sum1 + str1[i];
        sum2 = sum2 +str2[i];
        

    }

    return sum1 == sum2;
    
}

int main() {
    char str1[50];
    char str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (stringAnagram(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}