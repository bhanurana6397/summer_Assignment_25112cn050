#include<stdio.h>
#include<string.h>
int main () {
    int i=0,n,m=0;
    char str[50],t;
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    n= strlen(str)-1;
    while (i<n){
      if(str[i]!=str[n]){
        m=1;
        break ;
      }
      i++;
      n--;
    }
    if(m==0){
        printf("Palindrome string\n");
    }
    else{
        printf("Not palindrome\n");
    }
  return 0;
}
