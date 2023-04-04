#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int f[256] = {0}, i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; i < strlen(str); i++) {
        f[(int)str[i]]++;
    }

    printf("Frequency of each character in the string: \n");
    for (i = 0; i < 256; i++) {
        if (f[i] != 0) {
            printf("%c = %d\n", i, f[i]);
        }
    }

}
