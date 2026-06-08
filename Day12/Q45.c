#include<stdio.h>
void pali(int n){
    int rev=0,rem,temp;
    temp=n;
    while (n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (temp==rev){
        printf("palindrome\n");
    }
    else{
        printf("not palindrome\n");
    }
}
int main () {
    int n;
    printf("enter a number   ");
    scanf("%d",&n);
    pali(n);
    return 0;
}
