#include<stdio.h>
#include "standard_types.h"

struct emp{
    u16   salary;
    u16   bouns;
    u16   deduction;
}Ahmed,Amr,Waled;
 int main()
 {  
    printf("\nEnter details :\n");
    printf("enter Ahemds salary");
    scanf("%d",&Ahmed.salary);
    printf("\n enter Ahemds bouns");
    scanf("%d",&Ahmed.bouns);
    printf("\n enter Ahemds deduction");
    scanf("%d",&Ahmed.deduction); 
    printf("\nenter Amr salary");
    scanf("%d",&Amr.salary);
    printf("\nenter Amr bouns");
    scanf("%d",&Amr.bouns);
    printf("\n enter Amr deduction");  
    scanf("%d",&Amr.deduction);
    printf("\n enter Waled salary");
    scanf("%d",&Waled.salary);
    printf("\n enter Waled bouns");
    scanf("%d",&Waled.bouns);
    printf("\n enter Waled deduction");
    scanf("%d",&Waled.deduction);
    u16 x,y,z,total;
    x=Ahmed.salary+Ahmed.bouns-Ahmed.deduction;
    y=Amr.salary+Amr.bouns-Amr.deduction;
    z=Waled.salary+Waled.bouns-Waled.deduction;
    total=x+y+z;
    printf("the total value is %d",total);  

    
     

 }