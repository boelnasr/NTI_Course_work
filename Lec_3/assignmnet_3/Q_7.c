#include <stdio.h>
int main() {
   int h, i, j, s;
   printf("Enter the number of rows: ");
   scanf("%d", &h);
   for (i = h; i >= 1; --i) {
      for (s = 0; s < h - i; ++s)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
   return 0;
}