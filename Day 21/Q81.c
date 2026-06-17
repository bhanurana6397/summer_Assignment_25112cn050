#include<stdio.h>
int main () {
    char a[50];
    int i=0;
    printf("Enter the string : ");
    scanf("%[^\n]",a);
    
    while (a[i]!='\0'){
        i++;
    }
    printf("%d   ",i);
    return 0;
}