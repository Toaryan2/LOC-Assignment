#include<stdio.h>
#include<string.h>
int main()
{
char str[100],chr;
int i,len,j;
printf("Enter any string");
gets(str);

printf("Enter the character to remove");
scanf("%c",&chr);
len=strlen(len);

for(i=0;i<len;i++);

    if (str[i]==chr)
{
    for(j=0;j<len;j++);
    {
        str [j]=str[j+1];
            }
            len--;
            i--;
}
}




