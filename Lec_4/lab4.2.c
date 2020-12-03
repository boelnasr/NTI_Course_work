#include<stdio.h>
int x=10; int y=20;

void swap(void)
{ int temp;
    temp=x;
    x=y;
    y=temp;
    }
 int main()
 {
    printf(" the first # before swap: %d\n",x);
    printf(" the second # before swap: %d\n",y);
    printf("the swap of global var\n");
    swap();
    printf(" the first # after swap: %d\n",x);
    printf(" the second # after swap: %d\n",y);
 }
