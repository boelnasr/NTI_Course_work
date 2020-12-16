#include <stdio.h>
#include "../standard_types.h"

typedef enum fan_level{
    Level_1=1,
    Level_2,
    Level_3,
}fan;

int main()
{
    u16 x;
    fan Level;
    printf("Enter fan level");
    scanf("%d",&x);
    switch (x)
    {
    case Level_1:
        printf("you choosed level_1");
        break;
    case Level_2:
        printf("you choosed level_2");
        break;
    case Level_3:
        printf("you choosed level_3");
        break;

    default:
    printf("wrong entery");
        break;
    }
}
