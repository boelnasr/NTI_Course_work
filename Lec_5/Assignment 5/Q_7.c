/* C Program to Swap Two Arrays Without Using Temp Variable */
#include<stdio.h>

int main()
{
 int Size, i, a[10], b[10], Temp;
printf("\nPlease Enter the Size of the Array\n");
 scanf("%d", &Size);
 printf("\nPlease Enter the First Array Elements\n");
 for(i = 0; i < Size; i++)
  {
      scanf("%d", &a[i]);
  }
 printf("\nPlease Enter the Second Array Elements\n");
 for(i = 0; i < Size; i ++)
  {
      scanf("%d", &b[i]);
  }

 //Swapping two Arrays 
 for(i = 0; i < Size; i++)
  {
    Temp=a[i];
    a[i]=b[i];
    b[i]=Temp;   
    }

 printf("\n a[%d] Array Elements After Swapping \n", Size); 
 for(i = 0; i < Size; i ++)
  {
      printf(" %d \t ",a[i]);
  }

printf("\n\n b[%d] Array Elements After Swapping \n", Size); 
 for(i = 0; i < Size; i ++)
  {
      printf(" %d \t ",b[i]);
  }

  return 0;
} 