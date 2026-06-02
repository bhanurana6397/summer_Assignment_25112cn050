#include<stdio.h>
int main () {
    int n,i,p,c=1;
    printf("enter the number \n");
    scanf("%d",&n);
    printf("enter the power\n");
    scanf("%d",&p);
    if(p==0){
        printf("%d to the power %d is 1 \n",n,p);
        return 0;
    }
    for (i=1;i<=p;i++){
        c=c*n; 
    }
    printf("%d to the power %d is %d \n",n,p,c);
    return 0;
}