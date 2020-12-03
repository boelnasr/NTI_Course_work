// C/C++ program for decimal to binary 
// conversion using recursion 
#include <stdio.h> 
  
// Decimal to binary conversion 
// using recursion 
int find(int n) 
{ 
    if (n == 0)  
        return 0;  
    else
        return (n % 2 + 10 *find(n / 2)); 
} 
  
// Driver code  
int main() 
{   int n,r;
    printf("Enter a positive intiger");
    scanf("%d",&n);
    printf("\n the binary representation is: %d\n", find(n)); 
    return 0; 
} 