#include <stdio.h>

int main() {
    char str[100];
    char c;
    int i, j;
    
    printf("Enter a string: ");
    gets(str);
    
    printf("Enter a character to remove: ");
    scanf("%c",&c);  
    
    for (i = j = 0; str[i] != '\0'; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    
    printf("Modified string: %s\n", str);
    
    return 0;
}
