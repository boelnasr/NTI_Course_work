// C program to check if a number is prime 
// Q_1
#include <stdio.h> 
#include<math.h> 
int main() 
{ 
	int n, i, flag = 1; 
	printf("Enter a number: "); // Ask user for input 
	scanf("%d", &n); // Store input number in a variable 
	for (i = 2; i <= sqrt(n); i++) { 
		if (n % i == 0) { 		// If n is divisible by any number between 2 and n/2, it is not prime 
			flag = 0; 
			break; 
		} 
	} 
	if(n<=1) 
	flag=0; 
	else if(n==2) 
	flag=1; 
	if (flag == 1) { printf("\n %d is a prime number", n); } 
	else { 	printf("\n %d is not a prime number", n); } 

	return 0; 
} 
