#include <stdio.h> 
int main() 
{ 
	int n, p; 
    int r=1;
	printf("Enter a number:\n "); // Ask user for input 
	scanf("%d", &n);
    printf("Enter a power:\n "); // Ask user for input 
	scanf("%d", &p);
    for (int i = 0; i < p; i++)
    {        r*=n; }
    printf("the result is:%d\n",r);
    return 0;
    }