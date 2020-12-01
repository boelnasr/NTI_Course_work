#include <stdio.h>
int main()
{
  int row, s, h;

  printf("Enter the Height the pyramid \n");
  scanf("%d", &h);

  for (row = 1; row <= h; row++)  
  {
    for (s = 1; s <= h-row+1; s++)  //for the spaces
      printf(" ");

    for (s = 1; s <= 2*row - 1; s++) //for tthe *
      printf("*");

    printf("\n");
  }

  return 0;
}