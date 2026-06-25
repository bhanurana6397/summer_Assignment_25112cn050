#include<stdio.h>
#include<string.h>
int main () {
    char word[10][50] , temp[50];
    int i,j,n;
    printf("Enter the number of words : ");
    scanf("%d",&n);
    printf("Enter %d words : ",n);
    for(i=0;i<n;i++){
        scanf(" %[^\n]",word[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(strlen(word[j]) > strlen(word[j+1])){
                strcpy(temp,word[j]);
                strcpy(word[j],word[j+1]);
                strcpy(word[j+1],temp);
            }
        }
    }
    printf("Sorted words \n");
    for(i=0;i<n;i++){
        printf("%s \t length (%lu)\n",word[i],strlen(word[i]));
    }
    return 0;
}