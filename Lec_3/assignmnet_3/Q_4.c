#include<stdio.h>  
 int main()    
{    
int n, reverse=0, rem;    
printf("Enter a number: ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     rem=n%10;    //the reminder is the units number 
     reverse=reverse*10+rem;    // a copy of the units is placed in front of the number
     n/=10;    //the units is removed
  }    
  printf("Reversed Number: %d",reverse);    
return 0;  
}   