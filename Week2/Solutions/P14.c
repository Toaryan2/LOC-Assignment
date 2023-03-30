#include<stdio.h>
#include <conio.h>


void main()

{
    int a[3][3],i, j;
    clrscr();
    printf("Enter first Matrix:-\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
            
        }
    }
    
    
    
    printf("Your Matrix before transpose is :- \n", &a[i][j]);
            
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d  ", a[i][j]);
            
        }
        
        
        printf("\n");
        
    }
    
    
    
    
  
    
    
     printf("\nAnd your transpose Matrix:-\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
           
           
            
            printf("%d  ",a[j][i]);
            
        }        
        
        
        printf("\n");
    }
    
    
    
    
    getch();
}