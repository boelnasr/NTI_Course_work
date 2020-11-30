#include<stdio.h>

int main(void){
int rate=50;
int Hours;
printf("enter the Worked hours");
scanf("%d",&Hours);
int salary=rate*Hours;
if (Hours<40)
{
    printf("a deiscount is being made\n");
    int x=salary*0.9;
    printf("the salaryis:%d",x);
}
else
{
    printf("the salary is:%d",salary);
}


}