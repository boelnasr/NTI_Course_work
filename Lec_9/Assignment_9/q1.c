#include <stdio.h>
 // Maximum string size


int main()
{
    char str[50];
    char * s = str;

    /* Input string from user */
    printf("Enter your text : ");
   scanf("%s",str);

    while(*s) 
    {
        *s = (*s >= 'a' && *s <= 'z') ? *s-32 : *s;
        s++;
    }

    printf("\n Uppercase string : %s",str);
    return 0;
}