#include<stdio.h>

int main(void){
int id;
int password;
printf("enter your ID");
scanf("%d",&id);
switch (id)
{
case 1234:
    printf("welcome Ahmed");
    printf("enter your password");
    scanf("%d",&password);
    switch (password)
    {
    case 4321:
        printf("correct password");
        break;
    
    default:
        printf("wrong password");
        break;
    }
    break;
case 5678:
    printf("welcome Youssef");
    printf("enter your password");
    scanf("%d",&password);
    switch (password)
    {
    case 8765:
        printf("correct password");
        break;
    
    default:
        printf("wrong password");
        break;
    }
    break;
case 1145:
    printf("welcome Mina");
    printf("enter your password");
    scanf("%d",&password);
    switch (password)
    {
    case 8765:
        printf("correct password");
        break;
    
    default:
        printf("wrong password");
        break;
    }
    
    break;
default:
    printf("wrong ID");
    break;
}







}