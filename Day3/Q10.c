#include<stdio.h>
int main (){
    int n,i,j,c=0;
    printf("enter the number");
    scanf("%d",&n);
    if (n<=1){
        printf("no number is prime");
        return 0;
    }
    if (n==2){
        printf("2 are prime");
    }
    if (n==3){
        printf("2,3 are prime");
    }
    if (n>=4){
        printf("2,3,");
      for (i=4;i<=n;i++){
            c=0;
         for(j=2;j<i;j++)
         {
          if(i%j==0){
            c++;
           }
         }
        
          if(c==0){
            printf("%d,",i);
          }
       }
       printf("\nare prime\n");
    }
    return 0;
}