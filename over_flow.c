#include<stdio.h> 
#include<stdlib.h> 
  
 int over_flow_check(int* result, int a, int b) 
 { 
     *result = a + b; 
     if(a > 0 && b > 0 && *result < 0) 
         return -1; 
     if(a < 0 && b < 0 && *result > 0) 
         return -1; 
     return 0; 
 } 
  
 int main() 
 { 
     int *res = (int *)malloc(sizeof(int)); 
     int x = 2147483640; 
     int y = 10; 
  
     printf("%d", over_flow_check(res, x, y)); 
  
     printf("\n %d", *res); 
     
     return 0; 
} 