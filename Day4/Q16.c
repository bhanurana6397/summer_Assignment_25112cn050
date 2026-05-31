#include<stdio.h>
#include<math.h>
int main () {
    int n,r,s,i,temp,arm,c;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
     s=i;
     arm=0;
        c=0;
     while(s>0){
        s=s/10;
        c++;
     }
     s=i;
     while(s>0){
        r=s%10;
        arm=arm+pow(r,c);
        s=s/10;
     }
     if(arm==i){
        printf("%d\t",i);
     }   
   } 
 return 0; 
}  
        