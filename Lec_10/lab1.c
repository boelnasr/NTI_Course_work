#include<stdio.h>

typedef unsigned char      u8;
typedef signed char        s8;
typedef unsigned int       u16;
typedef signed int         s16;
typedef unsigned long int  u32;
typedef signed long int    s32;
typedef float              f32;
typedef long double        d64;


void main()
{   printf("%d\n",sizeof(u8));
    printf("%d\n",sizeof(s8)); 
    printf("%d\n",sizeof(u16));
    printf("%d\n",sizeof(s16)); 
    printf("%d\n",sizeof(u32));
    printf("%d\n",sizeof(s32)); 
    printf("%d\n",sizeof(d64));     
    
}