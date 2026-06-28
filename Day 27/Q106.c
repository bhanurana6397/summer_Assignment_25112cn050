#include<stdio.h>
#include<string.h>
struct employee {
    char name[100];
    int id,salary;
    char s;
};
int main (){
    int i,n=0;
    int o,found;
    char na[100];
    struct employee glb[100];
    while(1){
        printf("\n1. To get information of Employee\n2. To record the Employee details\n3. To exit\nEnter your choice\n");
        scanf("%d",&o);
        switch(o){
            case 1 :
             printf("Enter the name of Employee\n");
             scanf(" %[^\n]",na);
             if(n==0){
                printf("No record available yet\n");
                break;
             }
             found=0;
             for(i=0;i<n;i++){
               if(strcmp(glb[i].name,na)==0){
                 printf("Name \t\t:%s\n",glb[i].name);
                 printf("Id no\t\t:%d\n",glb[i].id);
                 printf("Salary\t\t:%d\n",glb[i].salary);
                 printf("Salary paid\t:%c\n",glb[i].s);
                 found=1;
                 break;
                }
             }
             if(found==0){
                printf("No record found");
             }
             break;
             
            case 2 :
             if(n>=100){
                printf("No space available");
                break;
             }
             printf("Enter %d Employee Details\n",n+1);
             printf("Enter the Employee name\n");
             scanf(" %[^\n]",glb[n].name);
             printf("Enter the Id number\n");
             scanf(" %d",&glb[n].id);
             printf("Enter the Salary amount\n");
             scanf(" %d",&glb[n].salary);
             printf("Salary paid\n");
             scanf(" %c",&glb[n].s);
             n++;
             break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please select 1, 2, or 3.\n");

        }
    }
    return 0;
}
