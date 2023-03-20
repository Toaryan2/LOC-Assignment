#include<stdio.h>
int main(){
int a; float meters,km ;
printf("Enter a number(in cm): ");
scanf("%d", &a);
meters = a*0.01;
km = a*0.00001;
printf("After converting into meters:%.2f m \n", meters);
printf("After converting into km:%f km \n", km); 
return 0;
}