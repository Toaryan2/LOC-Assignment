#include<stdio.h>
void main()
{
 float s,m,p,c,e,h,b,a,per;
 printf("enter the marks secured in all subject\n");
 scanf("%f",&s);
 printf("enter the mark secured in mathematics\n");
 scanf("%f",&m);
 printf("enter the marks secured in physics\n");
 scanf("%f",&p);
 printf("enter the marks secured in chemistry\n");
 scanf("%f",&c);
 printf("enter the marks secured in hindi\n");
 scanf("%f",&h);
 b=m+p+c+e+h;
 a=(m+p+c+e+h)/5;
 per=(m+p+e+h+c)*100/(s*5);
 printf("your totl marks is %.2f\naverage is %.2f\npercentage is%.2f",b,a,per);

}