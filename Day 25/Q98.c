#include<stdio.h>
#include<string.h>
int main () {
    int i,j,n1,n2,x,m,k=0;
    char str1[150],str2[150],comm[150];
    printf("Enter the string 1 (lower case) : ");
    scanf(" %[^\n]",str1);
    printf("Enter the string 2 (lower case) : ");
    scanf(" %[^\n]",str2);
    n1 =strlen(str1);
    n2 =strlen(str2);
    for(i=0;i<n1;i++){
        x=0;
        for(m=0;m<i;m++){
         if(str1[i]==str1[m]){
           x=-1;
           break;
         }
        }
        if(x==-1 || str1[i]==' '){
            continue;
        }
        for(j=0;j<n2;j++){
            if(str1[i]==str2[j]){
                comm[k]=str2[j];
                k++;
                break;
            }
        }
    }
    printf("Common characters are : \n");
    for(i=0;i<k;i++){
        printf("%c  ",comm[i]);
    }
    return 0;
}