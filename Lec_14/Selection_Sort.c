#include <stdio.h>
typedef unsigned char       u8;
typedef signed char         s8;
typedef unsigned short int u16;
typedef signed short int   s16;
typedef unsigned long int  u32;
typedef signed long int    s32;
typedef float              f32;
typedef double             f64;
typedef long double        f128;

#define SIZE     10

void Selection_Sort(s32 * arr,s32 size);

void main(void)
{
	s32 arr[SIZE];
	s32 size;
	u8 i;
	printf("Please enter the size of the array = ");
	scanf("%d",&size);
	
	for(i = 0 ; i< size ; i++)
	{
		scanf("%d",&arr[i]);
	}
	Selection_Sort(arr,size);
	printf("Data after sorting \n");
	for(i = 0 ; i< size ; i++)
	{
		printf("%d\n",arr[i]);
	}
	
}

void Selection_Sort(s32 * arr,s32 size)
{
	//check the pointer is not equal NULL to avoid Wild pointer
	
	//Apply selection sort algo
	s32 min_index,i,j;
	for(i = 0;i < (size - 1);i++)
	{
		/* update the min index with the current index */
		min_index = i;
		for(j = i+1 ; j < size ; j++)
		{
			if(arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		/* apply swapping */
		if(min_index != i)
		{
			arr[i]         ^= arr[min_index];
			arr[min_index] ^= arr[i];
			arr[i]         ^= arr[min_index];
		}
	}
}
