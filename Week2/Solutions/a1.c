 #include <stdio.h> 
  
 int occurrences(int a[], int length, int find); 
  
 int main(void) 
 { 
   int a[100],i, length,find;
   
  
   printf("how many elements you wish to check");
   scanf("%d",&length);
   
   printf("Enter the elements of an array:-\n");
    for(i=0; i<length; i++)
    {
       
            scanf("%d", &a[i]);
            
     }
        
        
       printf("which number you want to check the occurrence");
        
   scanf("%d",&find);
   
   int foundarray = occurrences(a, length, find ); 
   
  
   
   printf("Number of %d found in given array: %d\n", find, foundarray); 
    
  
   return 0; 
 } 
  
 
 
 
 
 
 int occurrences(int a[], int length, int find) 
 { 
  
   int count = 0; 
  
  
   for (int i = 0; i < length; i++) 
   
   {
     if (a[i] == find) 
     count++; 
    }
   return count;
   
   }