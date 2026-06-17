#include<stdio.h>
#include<string.h>
int main () {
    int i=0,n;
    char str[50],t;
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    n=strlen(str)-1;
    while (i<n){
      t=str[i];
      str[i]=str[n];
      str[n]=t;
      i++;
      n--;
    }
    printf("%s\n",str);
    return 0;
}