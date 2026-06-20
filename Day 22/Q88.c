#include<stdio.h>
#include<string.h>
int main () {
    int i,j,n;
    char str[150];
    printf("Enter the string either in lower or upper case\n");
    scanf("%[^\n]",str);
    n=strlen(str);
    for(i=0;i<n;i++){
     if (str[i]==' '){
        for(j=i;j<n-1;j++){
            str[j]=str[j+1];
            
        }
        str[j]='\0';
        i--;
        n--;
     }    
    }
    printf("%s",str);
    return 0;
}