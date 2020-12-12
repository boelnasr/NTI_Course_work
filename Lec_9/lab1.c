#include<stdio.h>

void fun_1(void);
void fun_2(void);
void fun_3(void);

int main()
{
    int x;
    printf("enter your choice");
    scanf("%d",&x);
    void(*ptr2fun[3])(void)={&fun_1,&fun_2,&fun_3};
    ptr2fun[x]();
}
void fun_1(void)
{    printf("choice #1");}
void fun_2(void)
{    printf("choice #2");}
void fun_3(void)
{    printf("choice #3");}