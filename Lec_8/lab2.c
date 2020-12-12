#include<stdio.h>
void return_name(char c,char **n)
{   
    switch (c)
    {
    case 'A':
    case 'a':
    printf("%s",n[0]);
    break;
    case 'G':
    case 'g':
    printf("%s",n[1]);
    break;
    case 'M':
    case 'm':
    printf("%s",n[2]);
    break;
    case 'o':
    case 'O':
    printf("%s",n[3]);
    break;
    
    default:
        break;
    }
}
void main()
{   char c;
    char *name [4]={"Ahmed","Gamal","Mohamed","Omar"};
    printf("enter key");
    scanf("%c",&c);
    return_name(c,name);




}