#include<stdio.h>
#include<math.h>
int rev (int n, int r);
int main () {
 int n,t,r=0;
  
    printf("enter the number\n");
    scanf("%d",&n);
    t=n;
    while (t>0){
        r = (r*10) + (t%10);
        t = t/10;
    }
    printf("the reverse of a number is %d\n",rev(n,r));
    return 0;
}
int rev (int n, int r) {
    if (n==0){
        return 0;
    }
    return (n%10)*pow(10,r) + rev(n/10,r-1);
}
