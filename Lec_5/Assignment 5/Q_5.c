#include <stdio.h>

int main()
{
    int i=0, n,count=0;
    printf("Print order of the odd numbers : ");/* Input upper limit from user */
    scanf("%d", &n);

    printf("\n The %d th  numbers of the series : ", n);

    /* Start loop from 1 and increment it by 1 */
    while (count!=n)
    {   i++;
       if (i%3==0)
       {count++;       }
       
    }
    printf("%d",i);

    return 0;
}