#include <stdio.h>
#include "../standard_types.h"
void swap_int(u16 *a, u16 *b) ;
void swap_char(u8 *a, u8 *b) ;
void swap_float(f32 *a, f32 *b) ;
void scan_students(u16 n);
void prin_info(u16 n);
int Avg(u16 n);
void Below_Avg(u16 avg,u16 n);
void selectionSort( u16 n);
struct student {
    u8 firstName[50];
    u16 ID;
    f32 marks;
} s[50];

int main() {  
    u16 n,*ptr;
    printf("enter the # of the students");
    scanf("%d",&n);
    scan_students(n);
    f32 r=Avg(n);
    printf("\n the average score is %.2f \n",r);
    selectionSort(n);
    Below_Avg(r,n);
    printf("the max mark \n",s[n-1].marks);
    prin_info(n-1);
    return 0;
}
void scan_students(u16 n)
{     printf("Enter information of students:\n");
    u16 i;
 for (i = 0; i < n; ++i) {
        
        printf("\n Enter ID number");
        scanf("%d",&s[i].ID);
        printf("\nEnter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
}
void prin_info(u16 n)
{   printf("\n ID number: %d\n", s[n].ID);
    printf("First name: ");
    puts(s[n].firstName);
    printf("Marks: %.1f", s[n].marks);
    printf("\n");
}
int Avg(u16 n)
{
    u16 sum=0,i;
    f32 Avg;
    for (i = 0; i < n; i++)
    {
        sum+=s[i].marks;
    }
    Avg=sum/n;
    return Avg;
}
void Below_Avg(u16 avg,u16 n)
{   u16 i;
    printf("students who got below Average");
    for ( i = 0; i < n&&s[i].marks<avg; i++)
    {if ((s[i].marks)<avg)
    {prin_info(i);}}}

void selectionSort( u16 n) 
{ 	u16 i, j, min_idx; 
	for (i = 0; i < n-1; i++) 
	{ 	min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (s[j].marks < s[min_idx].marks) 
			min_idx = j;  
		swap_float(&s[min_idx].marks, &s[i].marks);
        swap_int(&s[min_idx].ID, &s[i].ID);
        swap_char(&s[min_idx].firstName[50], &s[i].firstName[50]);}}

void swap_int(u16 *a, u16 *b) 
{ 
	u16 temp = *a; 
	*a = *b; 
	*b = temp; 
} 
void swap_char(u8 *a, u8 *b) 
{ 
	u8 temp = *a; 
	*a = *b; 
	*b = temp; 
} 
void swap_float(f32 *a, f32 *b) 
{ 
	f32 temp = *a; 
	*a = *b; 
	*b = temp; 
} 

