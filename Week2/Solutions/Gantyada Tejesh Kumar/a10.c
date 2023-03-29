#include <stdio.h>

void main() {
   char str[100];
   int alphabets = 0, digits = 0, specials = 0, i;

   printf("Enter a string: ");
   gets(str);

   for (i = 0; str[i] != '\0'; i++) {
      if (str[i] >= 'a' && str[i] <= 'z') {
         alphabets++;
      } else if (str[i] >= '0' && str[i] <= '9') {
         digits++;
      } else {
         specials++;
      }
   }

   printf("Total number of alphabets: %d\n", alphabets);
   printf("Total number of digits: %d\n", digits);
   printf("Total number of special characters: %d\n", specials);
}
