#include <stdio.h>
#include "standard_types.h"
typedef struct student {
    
    u16 M;
    u16 E;
    u16 P;
    u16 C;
} s;

int main(){
    u16 ID;
    s class[10]={{20,33,25,36},{20,20,20,1},{1,2,3,4},{11,22,33,44},{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4},{55,66,77,88}};
    printf("enter student Id");
    scanf("%d",&ID);
    if (ID>10&&ID==0)
    {   printf("Wrong ID");
   }
    else
    {
        printf("the Math grade %d\n",class[ID-1].M);
        printf("the English grade %d\n",class[ID-1].E);
        printf("thePhysics grade %d\n",class[ID-1].P);
        printf("the grade of chemistry %d\n",class[ID-1].C);
    }
       
    




}