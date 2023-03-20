#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three sides: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
        printf("The triangle is equilateral\n");
    else
        printf("The triangle is isoceles");
    return 0;
}
