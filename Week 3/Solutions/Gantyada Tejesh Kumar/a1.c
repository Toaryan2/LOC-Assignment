#include <stdio.h>
#include <string.h>

void main() {
    char str[100], r, str1[100];
    int i, j=0;
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Enter the character to remove: ");
    scanf("%c", &r);
    
    
    for (i = 0; i < strlen(str); i++) {
        if (str[i] != r) {
            str1[j++] = str[i];
        }
    }
    
    str1[j] = '\0';
    
    printf("String after removing %c: %s", r, str1);
    
}
