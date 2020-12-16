#include <stdio.h>
#include "../standard_types.h"

typedef union {
    
    struct 
    {
        u8 First_name[30];
    }first;
    u8 Last_name[30];
    
}family;
void scan_family(u16 n,family names[]);
void print_family(u16 n,family names[]);
int main()
{   
    u16 x;
    printf("enter the # of family members");
    scanf("%d",&x);
    family n[x];
    ////////////////////////
    printf("enter the Family name ");
    scanf("%s",&n->Last_name);
    scan_family(x,n);
    print_family(x,n);
     printf( "\n Memory size occupied by the union : %d\n", sizeof(n));

    
}
void scan_family(u16 n,family names[])
{   u16 i;
    printf("enter the family members\n");
    for (i = 0; i < n; i++)
    {   printf("fmaily member #%d",i+1);
        scanf("%s",&names[i].first.First_name);
    }
    
}
void print_family(u16 n,family names[])
{   u16 i;
    printf("enter the family members");
    for (i = 0; i < n; i++)
    {   printf("\n fmaily member #%d",i+1);
        printf("%s %s",names[i].first.First_name, names->Last_name);
    }
    
}

