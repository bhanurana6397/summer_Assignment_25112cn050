#include<stdio.h>
#include<string.h>

int main() {
    char str[150],a[150],ab;
    int i,j,count = 0,max=0,n;
    printf("Enter the string");
    scanf(" %[^\n]",str);
    n=strlen(str);
    for(i=0;i<n;i++){
       for(j=0;j<n;j++){
        if(str[i]==str[j]){
            count++;
        }
       }
       a[i]=count;
       count=0;
       if(a[i]>max){
           max=a[i];
           ab=str[i];
        }
    } 
    printf("%c occurs maximum time\n",ab);
    return 0;
}