#include <stdio.h>
#include <string.h>

int main() {
    char str[150];
    printf("Enter the word");
    scanf(" %[^\n]",str);
    int len = strlen(str);
    int index = 0; 
    printf("Original String: %s\n", str);  
    for (int i = 0; i < len; i++) {
        int isDuplicate = 0;       
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            str[index] = str[i];
            index++;
        }
    }

    str[index] = '\0';
    printf("Result String:   %s\n", str);

    return 0;
}
