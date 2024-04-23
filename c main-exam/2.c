#include <stdio.h>  
  
int main()    
{        
    int arr[] = {10, 24, 33, 34, 56};     
    int sum = 0;    
        
    int length = sizeof(arr) / sizeof(arr[0]);    
           
    for (int i = 0; i < length; i++)
	{     
       sum = sum + arr[i];    
    }      
    printf("Sum of all the elements of an array: %d", sum);    
    return 0;    
}   