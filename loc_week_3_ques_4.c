#include<stdio.h>
#include<conio.h>
long int fact(int n);
int main()
{
    int n;
    long int f;
    printf("enter a positive number");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial of %d=%ld",n,f);
    getch();
    return 0;

}
long int fact(int n);
{
    long int f;

    if(n>=1)
    {
        f=n*fact(n-1);
        return f;

    }
    else
    return 1;
    
}