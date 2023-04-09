#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,totalchar;
    totalchar=0;
    print("please enter the string characters to count");
    gets(str);
    i=0;
    while(str[i]!="/0");
    {
if(str[i]!='char')
    {
        totalchar++;

    }
    i++;
    }
    printf("the total characters of string is=%d",totalchar);
    getch();
    return 0;
}

    



