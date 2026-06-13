#include<stdio.h>
int main () {
    int n1,n2,i,j,f,k=0;
    printf("Enter the number of elements in first array: ");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter the number of elements in second array: ");
    scanf("%d",&n2);
    int b[n2],c[n1+n2];
    printf("Enter the elements of first array: ");
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); 
    }
    printf("Enter the elements of second array: ");
    for(i=0;i<n2;i++) {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++) {
        c[i]=a[i];
    }
    for(i=0;i<n2;i++) {
        f=0;
        for(j=0;j<n1;j++) {
            if(b[i]==a[j]) {
                f=1;
                break;
            }
        }
        if(f==0) {
            c[n1+k]=b[i];
            k++;
        }
    }
    printf("The union of the two arrays is: ");
    for(i=0;i<n1+k;i++) {
        printf("%d ",c[i]);
    }   
    return 0;
}