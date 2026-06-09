#include<stdio.h>
int main()
{
    int a[50],i,n,sum=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)    {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    printf("\nThe sum of the elements in the array is: %d", sum);
    return 0;
}