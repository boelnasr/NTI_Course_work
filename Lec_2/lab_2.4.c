#include<stdio.h>

int main(void){
int N;
printf("Entert your grade");
scanf("%d",&N);

if (N>=85)
{
    printf("\nthe grade is Excellent\n");
    
}
else if(N>=75&&N<85)
{
    printf("\nthe grade is V.Good\n");
}
else if(N>=65&&N<75)
{
    printf("\nthe grade is Good\n");
}
else if(N>=50&&N<65)
{
    printf("\nthe grade is Normal\n");
}
else
{
    printf("\nthe grade is Failed\n");
}

}