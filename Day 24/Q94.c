#include <stdio.h>
#include <string.h>
int main() {
    char str[150];
    int len,i,count;
    printf("enter the string to compress : ");
    scanf(" %[^\n]",str);
    len = strlen(str);
    printf("Original:   %s\n", str);
    printf("Compressed: ");
    for (i = 0; i < len; i++) {
        count = 1;
        while (i + 1 < len && str[i] == str[i + 1]) {
            count++;
            i++; 
        }
        printf("%c%d", str[i], count);
    }
    printf("\n");
    return 0;
}
