#include<stdio.h>

int cube(int x){
    return(x*x*x);
}
int main()
{   int x, r;
    printf("Enter the intiger:");
    scanf("%d",&x);
    r=x*x*x;
    printf("\n the cube of %d is :%d",x,r);
}
