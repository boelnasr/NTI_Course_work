#include<stdio.h>

int main(void){
int id,i;
int password;
printf("enter your ID");
scanf("%d",&id);
switch (id)
{
case 1234:
    printf("welcome Ahmed\n");
    printf("enter your password");
    scanf("%d",&password);
    for (i = 0; i < 3; i++)
    {
        if (password == 7788)
        {
            printf("Correct password welcome");
            break;
        }
        else
        {
            printf("wrong password try again\n");
            printf("enter your password");
            scanf("%d",&password);
        }          
    }
    if (i==2)
    {
        printf("No more tries");
    }   
    break;
    /////////////////////////
case 5678:
    printf("welcome Amr\n");
    printf("enter your password");
    scanf("%d",&password);
     for (i = 0; i < 3; i++)
    {
        if (password == 2222)
        {
            printf("Correct password welcome");
            break;
        }
         else
        {
            printf("wrong password try again\n");
            printf("enter your password");
            scanf("%d",&password);
        } 
    }
    if (i==2)
    {
        printf("No more tries");
    }  
    break;
    ///////////////////////////
case 9870:
    printf("welcome Wael\n");
    printf("enter your password");
    scanf("%d",&password);
    for (int i = 0; i < 3; i++)
    {
        if (password == 3333)
        {
            printf("Correct password welcome");
            break;
        }
         else
        {
            printf("wrong password try again\n");
            printf("enter your password");
            scanf("%d",&password);
        }  
    }
       if (i==2)
    {
        printf("No more tries");
    }  
    break;
default:
    printf("You are not registerd");
    break;
}
}