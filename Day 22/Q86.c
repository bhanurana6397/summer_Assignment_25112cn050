#include <stdio.h>
#include <string.h>

int main () {
    int c = 0, n, i;
    int in_word = 0; 
    char str[150];

    printf("Enter the string\n");
    scanf(" %[^\n]", str); 
    n = strlen(str);
    
    for(i = 0; i < n; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            in_word = 0; 
        } 
        else if (in_word == 0) {
            in_word = 1; 
            c++;         
        }
    }
    
    printf("Given string has %d words\n", c);
    return 0;
}
