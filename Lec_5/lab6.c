#include<stdio.h>

int buble(int array[], int n)
{
    int i, j ;
    for(i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (array[j]>array[j+1])
            {   
                int temp= array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                
            }
        }
        }

}

int main()
{   int a[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter element # %d: ",(i+1));
        scanf("%d",&a[i]);
    }
    buble(a, 10);
    printf("The array after sort \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n",a[i]);
    }
    }