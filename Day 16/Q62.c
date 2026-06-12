#include<stdio.h>
int main () {
    int n,i,j,c,x=0,d,a[50];
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); 
    }
    printf("First Elements comes maximum times:\n ");
    for(i=0;i<n;i++) {
      c=0;
        for(j=0;j<n;j++) {
            if(a[i] == a[j]) {
                c++;
            }
        }
        if(c>x){
          x=c;
          d=i;
        }
    }
    printf("%d\n",  a[d] );
    return 0;
}