#include <stdio.h>
#include "standard_types.h"


typedef struct input {
   u16 x;
   u32 y;
   f32 z;
}s;
typedef struct result {
   u16 x;
   u32 y;
   f32 z;
}r;

void sum_struct(s *N1,s *N2,r *N3);

void main()
{
    s N1,N2;
    r N3 ;
    printf("enter the first #");
    scanf("%d %d %f",&N1.x,&N1.y,&N1.z);
    printf("enter the second #");
    scanf("%d %d %f",&N2.x,&N2.y,&N2.z);
    sum_struct(&N1,&N2,&N3);
    printf("enter the result %d %d %.2f",N3.x,N3.y,N3.z);

}
void sum_struct(s *N1,s *N2,r *N3)
{   if ((N1!=NULL)&&(N2!=NULL)&&(N1!=NULL))
{
    N3->x=(N1->x)+(N2->x);
    N3->y=(N1->y)+(N2->y);
    N3->z=(N1->z)+(N2->z);
}   
}