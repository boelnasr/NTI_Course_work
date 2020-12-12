#include <stdio.h>
 
int findFirstOccurrence(int arr[], int N, int x)
{    
     // initialize the result 
    int result = -1;
     // iterate till search space contains at-least one element
    for(int i=0;i<N;i++)
    {
        if (arr[i]==x)
        {   result=i;
            break;
        }
        
    }
    return result;
}
 int main(){
    int n=10;
    int target ;
    int a[n];
    for (int i = 0; i < 10; i++)
    {   printf("enter element # %d: ",(i+1));
        scanf("%d",&a[i]);}
    printf("enter the target element d: ");
    scanf("%d",&target);
    int index = findFirstOccurrence(a, n, target);
    if (index != -1)
        printf("First occurrence of element %d is found at index %d",target, (index+1));
    else
        printf("Element not found in the array");
     return 0;}

    