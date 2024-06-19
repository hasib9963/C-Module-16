#include <stdio.h>
#include <string.h>

int is_palindrome(char *string) {
    int length = strlen(string);
    for(int i = 0; i < length / 2; i++) {
        if(string[i] != string[length - 1 - i]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main() {
    char string[10];
    scanf("%9s", string); // Ensure no buffer overflow
    int value = is_palindrome(string);
    if(value == 0) {
        printf("Not Palindrome");
    } else {
        printf("Palindrome");
    }
    return 0;
}
