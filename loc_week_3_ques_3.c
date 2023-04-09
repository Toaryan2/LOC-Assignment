#include<stdio.h>
int main()
{
    int fst,sec,*p,*q,sum;
    printf("enter two integers to add");
    scanf("%d%d",&fst,&sec);
    p=&fst;
    q=&sec;
    sum=*p+*q;
    printf("sum of entered nos=%d",sum);
    return 0;
    

}
