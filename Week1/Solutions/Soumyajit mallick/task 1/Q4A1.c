#include<stdio.h>

int main()
{ 
    int a,b,c, sum, multiplication,division, substraction;
   printf("Enter three numbers:\n");
   scanf("%d%d%d",&a,&b,&c);
   switch(c)
   {
     case 1:
     sum=a+b;
           printf("%d",sum);
           break;
     case 2:
     multiplication=a*b;
           printf("%d",multiplication);
           break;
     case 3:
     division=a/b;
           printf("%d",division);
           break;
    case 4 :     
      substraction=a-b;
           printf("%d",substraction);
           break;
   }

    return 0;
}