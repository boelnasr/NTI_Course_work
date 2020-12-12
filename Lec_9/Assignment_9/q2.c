#include <stdio.h>
void toggleCase(char * str);


int main()
{
    char str[100];

    /* Input string from user */
    printf("Enter any string: ");
    scanf("%s",str);

    printf("String before toggling case: %s", str);

    toggleCase(str);

    printf("String after toggling case: %s", str);

    return 0;
}

void toggleCase(char * str)
{
    int i = 0;

    while(*str != '\0')
    {
        if(*str>='a' && *str<='z')
        {
            *str = *str - 32;
        }
        else if(*str>='A' && *str<='Z')
        {
            *str = *str + 32;
        }

        *str++;
    }
}