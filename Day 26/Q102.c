#include<stdio.h>
int main () {
   int n;
   while(1){
     printf("Enter your age to check eligibility\n");
     scanf("%d",&n);
     if(n==-1){
      printf("\nGood bye !!");
      break;
     }
     else if(n<18 && n>0){
      printf("Not eligible for voting \t Wait for '%d' more year\nEnter -1 to exit\n",(18-n));
     }
     else if (n>=18){
      printf("Eligible for voting\nEnter -1 to exit\n");
     }
     else {
      printf("Enter the valid age ( > 0 )");
     }
   }
   return 0;

}