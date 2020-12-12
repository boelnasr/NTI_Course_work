/* C Program to Swap Two Arrays Without Using Temp Variable */
#include<stdio.h>

int main()
{
 int Size, i,j,a[10], temp;
printf("\nPlease Enter the Size of the Array\n");
 scanf("%d", &Size);
 printf("\nPlease Enter the  Array Elements\n");
 for(i = 0; i < Size; i++)
  {
      scanf("%d", &a[i]);
  }
    i=0;
    j=Size-1;
  while( i < j){
         //swap
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        //Update i and j
        i++;  
        j--;  
    }

 printf("\n a[%d] Array Elements After reversing \n", Size); 
 for(i = 0; i < Size; i ++)
  {
      printf(" %d \t ",a[i]);
  }



  return 0;
} 