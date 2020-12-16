#include <stdio.h>
#include "../standard_types.h"

void fun_1(void);
void fun_2(void);
struct student {
    u8 firstName[50];
    u16 ID;
    f32 marks;
} s[10];

int main() {  
    void(*ptr2fun[2])(void)={&fun_1,&fun_2};
    ptr2fun[0]();
   printf("///////////////////////////");
    ptr2fun[1]();
    return 0;
}
void fun_1(void)
{     printf("Enter information of students:\n");
    u16 i;
 for (i = 0; i < 5; ++i) {
        
        printf("\n Enter ID number");
        scanf("%d",&s[i].ID);
        printf("\nEnter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
}
void fun_2(void)
{    printf("Displaying Information:\n\n");
    u16 i;
    // displaying information
    for (i = 0; i < 5; ++i) {
        printf("\n ID number: %d\n", s[i].ID);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    }