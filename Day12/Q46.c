#include<stdio.h>
#include<math.h>
void arm(int n);
int main () {
    int n;
    printf("enter a number   ");
    scanf("%d",&n);
    arm(n);
    return 0;
}
void arm (int n){
    int r,temp,c=0,s=0;
    temp=n;
    while (n>0){
        n=n/10;
        c++;
    }
    n=temp;
    while (n>0){
        r=n%10;
        s+=pow(r,c);
        n=n/10;
    }
    if (temp==s){
        printf("armstrong\n");
    }
    else{
        printf("not armstrong\n");
    }
}