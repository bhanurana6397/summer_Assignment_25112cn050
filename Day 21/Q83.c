#include<stdio.h>
int main (){
    int i,c=0,v=0;
    char str[50],ch;
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    while(str[i]!= '\0'){
        ch=str[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch== 'o'||ch== 'u'||ch=='A'||ch=='E'||ch=='I'||ch== 'O'||ch== 'U'){
            v++;
        }
        else if (ch<='z' && ch>='a' || ch>='A' && ch<='Z'){
            c++;
        }
        i++;
    }
    printf("vowels %d\n",v);
    printf("consonants %d\n",c);
    return 0;
}