#include<stdio.h>
#include<string.h>
int main () {
    int i,n;
    char str[50];
    printf("Enter the string : ");
    scanf(" %[^\n]",str);
    n=strlen(str);
    for (i=0;i<n ;i++){
        if(str[i]>='a'&& str[i]<='z'){
         str[i]=str[i]-32;
        }
    }
    printf("%s",str);
    return 0;
}