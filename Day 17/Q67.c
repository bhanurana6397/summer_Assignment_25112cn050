#include<stdio.h>
int main () {
    int n1,n2,i,j,f,m,k=0;
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
    for(i=0;i<n2;i++) {
        for(j=0;j<n1;j++) {
            if(b[i]==a[j]) {
                f=0;
                for(m=0;m<k;m++) {
                    if(c[m]==b[i]) {
                        f=1;
                        break;
                    }
                }
                if(f==0) {
                    c[k]=b[i];
                 k++;
                }
                break;
            }
        }       
    }
    printf("The intersection of the two arrays are: ");
    for(i=0;i<k;i++){
        printf("%d ",c[i]);
    }
    return 0;
}