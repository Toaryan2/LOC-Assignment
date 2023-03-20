#include<stdio.h>
int main(){
int a,b,c,d,e;
int sum; float average; float percentage;
printf("Enter 5 numbers: \n ");
scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
sum = a+b+c+d+e;
average=(float)sum/5;
percentage=(float) sum/500*100;
printf("Average value=%2f\n",average);
printf("Percentage=%.2f%%",percentage);
return 0;
}
