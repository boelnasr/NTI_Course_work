#include<stdio.h>


int calc(int a,int b, char op){
    int result;
switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;              
    }
    return (result);
    }

int main ()
{   int x,y,r;
    char o;
    printf("Enter the equation:");
    scanf("%d%c%d",&x,&o,&y);
    r=calc(x,y,o);
    printf("The result is:%d",r);
}