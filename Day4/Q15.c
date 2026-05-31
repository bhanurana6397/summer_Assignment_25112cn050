#include<stdio.h>
#include<math.h>
int main () {
    int n,r,s,arm=0,c=0;
    printf("enter the number");
    scanf("%d",&n);
    s=n;
    while(n>0){
        n=n/10;
        c++;
    }
    n=s;
    while(n>0){
        r=n%10;
        arm=arm+pow(r,c);
        n=n/10;
    }
    if(arm==s){
        printf("the number is armstrong\n");
    }    else{
        printf("the number is not armstrong\n");
    }  
 return 0; 
}  
        