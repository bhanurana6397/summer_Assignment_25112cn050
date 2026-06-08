#include<stdio.h>
void perfect(int n){
    int sum=0;
    for (int i=1;i<n;i++){
        if (n%i==0){
            sum+=i;
        }
    }
    if (sum==n){
        printf("perfect\n");
    }
    else{
        printf("not perfect\n");
    }
}
int main () {
    int n;
    printf("enter a number   ");
    scanf("%d",&n);
    perfect(n);
    return 0;
}