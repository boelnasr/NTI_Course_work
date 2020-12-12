#include<stdio.h>
void scan_2d_array( int r,int c,int a[r][c]) // #of elements to be filled
{ 
   for(int i=0;i<r;i++)
  {
      for(int j=0;j<c;j++)
      {
	      printf("element - [%d],[%d] :\t  ",i,j);
          scanf("%d",&a[i][j]);  
      }
  } }
int print_2d_array(int r, int c, int a[r][c]){
printf("\nThe matrix is : \n");
  for(int i=0;i<r;i++)
  {
      printf("\n");
      for(int j=0;j<c;j++)
           printf("element - [%d],[%d] : %d \t" ,i,j,a[i][j]);
  }
 printf("\n\n");
}
int mult_2_matrices(int r, int c,int a[r][c],int b[r][c],int d [r][c]){
int sum =0;
for (int i = 0; i <= 2; i++) {
      for (int j = 0; j <= 2; j++) {
        for (int k = 0; k <= 2; k++) {
            sum = sum + a[i][k] * b[k][j];
         }
         d[i][j] = sum;
         
      }
   }}
void main()
{   
    int arr1[3][3];
    
    int arr2[3][3];
    int arr3[3][3];
    printf("enter the first array");
    scan_2d_array(3,3,arr1);
    printf("enter the second array");
    scan_2d_array(3,3,arr2);
    mult_2_matrices(3,3,arr1,arr2,arr3);
    printf("The result of the multiplication\n");
    print_2d_array(3,3,arr3);
}