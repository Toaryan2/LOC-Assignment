#include<stdio.h>
int main(){
    int a,b,c,sum ;
    printf("Enter three angles: \n");
    scanf("%d%d%d", &a,&b,&c);
    sum = a+b+c;
    if(sum == 180){
    printf("The triangle is valid.\n",sum);
    }
    else{ 
    printf("The triangle is invalid.\n",sum);
    }
    return 0;
    }
