// C program to set, clear and toggle a bit 
#include <stdio.h> 
// Function to set the kth bit of n 
int setBit(int n, int k) 
{ 
	return (n | (1 << (k - 1))); 
} 

// Function to clear the kth bit of n 
int clearBit(int n, int k) 
{ 
	return (n & (~(1 << (k - 1)))); 
} 

// Function to toggle the kth bit of n 
int toggleBit(int n, int k) 
{ 
	return (n ^ (1 << (k - 1))); 
} 
int getBit(int n, int k)
{
    return((n >> k) & 1);
} 
int main() 
{ 
    int n,k;
	printf("Enter a positive intiger");
    scanf("%d",&n);
    printf("Enter a manipilation variable");
    scanf("%d",&k);
    
	printf("%d with %d-th bit Set: %d\n", 
		n, k, setBit(n, k)); 
	printf("%d with %d-th bit Cleared: %d\n", 
		n, k, clearBit(n, k)); 
	printf("%d with %d-th bit Toggled: %d\n", 
		n, k, toggleBit(n, k)); 
    printf("%d with %d-th bit status: %d\n", 
		n, k, getBit(n, k)); 
	return 0; 
} 
