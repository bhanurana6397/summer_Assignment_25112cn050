#include<stdio.h>

int main () {
   int a=10,x=37;
   printf("========================\n");
   printf("  Number guessing game \n");
   printf("========================\n");
   printf("Enter the number between 0 to 100 : \n");
   while(1){
      scanf("%d",&a);
      if(a<0 || a>100){
       printf("OOPS !!, Enter the number between 0 to 100\n");
       continue;
      }
      if(a>37){
         printf("lower number \n");
      }
      if(a<37){
         printf("higher number \n");
      }
      if(a==37){
         printf("You win !!\n");
         break;
      }
   }
   
   return 0;
}