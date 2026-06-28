#include<stdio.h>
#include<string.h>
struct student {
    char name[100], branch[100];
    int roll;
};
int main (){
    int i,n=0;
    int o,found;
    char na[100];
    struct student glbitm[100];
    while(1){
        printf("\n1. To get information of student\n2. To record the student details\n3. To exit\nEnter your choice\n");
        scanf("%d",&o);
        switch(o){
            case 1 :
             printf("Enter the name of student\n");
             scanf(" %[^\n]",na);
             if(n==0){
                printf("No record available yet\n");
                break;
             }
             found=0;
             for(i=0;i<n;i++){
               if(strcmp(glbitm[i].name,na)==0){
                 printf("Name \t:%s\n",na);
                 printf("Branch\t:%s\n",glbitm[i].branch);
                 printf("Roll no\t:%d\n",glbitm[i].roll);
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
             printf("Enter student number %d Details\n",n+1);
             printf("Enter the student name , branch , rollno\n");
             scanf(" %[^\n]",glbitm[n].name);
             scanf(" %[^\n]",glbitm[n].branch);
             scanf(" %d",&glbitm[n].roll);
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
