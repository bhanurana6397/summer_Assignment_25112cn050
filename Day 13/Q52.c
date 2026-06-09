#include<stdio.h>
int main()
{
    int a[50],i,n,even=0,odd=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)    {
        scanf("%d",&a[i]);
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("The number of even elements in the array is: %d\n", even);
    printf("The number of odd elements in the array is: %d\n", odd);
    return 0;
}