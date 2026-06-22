#include<stdio.h>
#include<string.h>
int main () {
    int i,j,k,n,c;
    char str[150];
    printf("Enter the string either in lower or upper case\n");
    scanf(" %[^\n]",str);
    n=strlen(str);
    
    for(i=0;i<n;i++){
        if(str[i]==' '){
            continue;
        }
        for (j=0;j<i;j++){
            if(str[j] == ' '){
                continue;
            }
            if(str[j]==str[i]){
                printf("First repeated character is %c\n",str[i]);
                return 0;
            }
        }
    }
    printf("No repeated character\n");
    return 0;
}