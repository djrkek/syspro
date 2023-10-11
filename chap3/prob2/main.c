#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 1000

void swapStrings(char *str1, char *str2) {
    char temp[MAX_STRING_LENGTH];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    char strings[5][MAX_STRING_LENGTH];
    

    for (int i = 0; i < 5; i++) {
    
        fgets(strings[i], sizeof(strings[i]), stdin);
        

        strtok(strings[i], "\n");
    }
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (strlen(strings[j]) < strlen(strings[j + 1])) {
                swapStrings(strings[j], strings[j + 1]);
            }
        }
    }
    
    
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }
    
    return 0;
}
