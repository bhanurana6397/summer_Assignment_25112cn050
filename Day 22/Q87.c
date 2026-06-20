#include<stdio.h>
#include<string.h>
int main () {
    int i,j,k,n,c;
    char str[150];
    printf("Enter the string either in lower or upper case\n");
    scanf(" %[^\n]",str);
    n=strlen(str);
    for(i=0;i<n;i++){
        c=1,k=0;
        for(j=i-1;j>=0;j--){
         if(str[i]==str[j]){
            k=1;
            break;
         }
        }
        if(k==1||str[i]==' '){
            continue;
        }
        for (j=i+1;j<n;j++){
            if(str[i]==str[j]){
                c++;
            }
        }
        printf("%c is %d times\n",str[i],c);
    }
    return 0;
}