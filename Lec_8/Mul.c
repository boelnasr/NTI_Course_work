#include<stdio.h>

void ScanArrM1(int (*ptr)[3],int rows);
void ScanArrM2(int row,int col,int arr[][col]);
void ScanArrM3(int * ptr, int rows,int cols);
void Mul      (int row,int col,int arr1[][col],int arr2[][col],int res[][col]);

void main(void)
{
	int arr[3][3];
	int arr1[3][3];
	int res[3][3];
	int i ,j;
	
	ScanArrM1(&arr[0],3);
	ScanArrM3((int *)arr1,3,3);
	Mul(3,3,arr,arr1,res);
	for(i = 0;i<3;i++)
	{
		for(j = 0 ;j<3 ; j++)
		{
			printf("%d\t",res[i][j]);
		}
		printf("\n");
	}
	
}
void Mul      (int row,int col,int arr1[][col],int arr2[][col],int res[][col])
{
	int rowcounter,colcounter,k,sum=0;
	for(rowcounter = 0 ; rowcounter < row ; rowcounter++)
	{
		for(colcounter = 0; colcounter < col; colcounter++)
		{
			for(k = 0 ; k < col; k++)
			{
				sum = sum + (arr1[rowcounter][k] * arr2[k][colcounter]);
			}
			res[rowcounter][colcounter] = sum;
			sum = 0;
		}
	}
}


void ScanArrM1(int (*ptr)[3],int rows)
{
	int row,col;
	if(ptr != NULL)
	{
		for(row = 0;row < rows;row++)
		{
			for(col = 0 ; col < 3;col++)
			{
				printf("Please enter the value of arr[%d][%d] = ",row,col);
				scanf("%d",&ptr[row][col]);
			}
		}
	}
}

void ScanArrM2(int row,int col,int arr[][col])
{
	int rowcounter,colcounter;
	if(arr != NULL)
	{
		for(rowcounter = 0;rowcounter < row;rowcounter++)
		{
			for(colcounter = 0 ; colcounter < col;colcounter++)
			{
				printf("Please enter the value of arr[%d][%d] = ",rowcounter,colcounter);
				scanf("%d",&arr[rowcounter][colcounter]);
			}
		}
	}	
}

void ScanArrM3(int * ptr, int rows,int cols)
{
	int rowcounter,colcounter;
	if(ptr != NULL)
	{
		for(rowcounter = 0;rowcounter <rows ; rowcounter++)
		{
			for(colcounter = 0; colcounter <cols ;colcounter++)
			{
				printf("Please enter the value of arr[%d][%d] = ",rowcounter,colcounter);
				scanf("%d",(ptr + (rowcounter * cols) + colcounter));				
			}
		}
	}
}