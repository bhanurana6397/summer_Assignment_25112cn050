#include <stdio.h>

int main() {
    int n, i,j,k, a[50], s;
    printf("enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("frequency of elements in the array:\n");
    for (i = 0; i < n; i++) {
        s=0;
        for(j=0;j<i;j++){
            if(a[i]==a[j])
                break;
        }
        if(j!=i){
            continue;//skip if element already counted
        }
        for(k=0;k<n;k++){
            if(a[i]==a[k])
                s++;
        }
        printf("%d occurs %d times\n", a[i], s);
    }
    return 0;
}   