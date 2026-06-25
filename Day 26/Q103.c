#include<stdio.h>
#include<stdlib.h>
int main () {
 int n,amount=5000, deposit, withdraw;
 printf("=========================\n");
 printf(" Welcome to ABC bank ATM\n");
 printf("=========================\n");

 while(1){
    printf("\nEnter your choice\n1. To check the balance\n2. To deposit the cash\n3. To withdraw the cash\n4. To exit\n");
    scanf("%d",&n);
     switch(n){
        case 1 :
         printf("\nYour balance is %d\n",amount);
         break;
        case 2 :
         printf("\nEnter the amount to deposit\n");
         scanf("%d",&deposit);
         amount+=deposit;
         printf("Your balance is %d\n",amount);
         break;
        case 3 :
         printf("\nEnter the amount to withdraw\n");
         scanf("%d", &withdraw);
         if(withdraw<=amount && withdraw>=0){
            amount-=withdraw;
            printf("Your balance is %d\n",amount);
         }
         else{
            printf("Insufficient balance\nYour balance is %d\n",amount);
         }
         break;
        case 4 :
         printf("\nThank you for using our ATM. Goodbye!\n");
         exit(0); 
         
        default :
         printf("\nInvalid choice! Please enter a number between 1 and 4.\n");
         break;
        }

    }
    return 0;
}
