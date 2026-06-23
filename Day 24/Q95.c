#include <stdio.h>
#include <string.h>

int main() {
    char str[150];
    printf("Enter the sentence to find longest word : ");
    scanf(" %[^\n]",str);
    int len = strlen(str);
    char longestWord[150] = "";
    char currentWord[150] = "";   
    int longestLen = 0;
    int currentLen = 0;
    printf("Sentence: %s\n", str);
    for (int i = 0; i <= len; i++) {      
        if (str[i] != ' ' && str[i] != '\0') {
            currentWord[currentLen] = str[i];
            currentLen++;
        } 
        else {
            currentWord[currentLen] = '\0'; 
            if (currentLen > longestLen) {
                longestLen = currentLen;
                strcpy(longestWord, currentWord);
            }
            currentLen = 0;
        }
    }

    printf("Longest word: %s (Length: %d)\n", longestWord, longestLen);

    return 0;
}
