#include <stdio.h>
#include <string.h>

int main() {
    int l1,l2;
    char str1[150],str2[150];
    printf("Enter the string 1 and string 2 : ");
    scanf(" %[^\n] %[^\n]",str1,str2);
    l1= strlen(str1);
    l2 = strlen(str2);

    if (l1 != l2) {
        printf("No, '%s' is not a rotation of '%s'\n", str2, str1);
        return 0; 
    }
    char temp[2 * l1 + 1];

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL) {
        printf("Yes, '%s' is a rotation of '%s'\n", str2, str1);
    } else {
        printf("No, '%s' is not a rotation of '%s'\n", str2, str1);
    }

    return 0;
}
