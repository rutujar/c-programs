#include <stdio.h>
#include <string.h>
int main() {
        int i = 0, j = 0, k;
        char string[256], result[256];
        char vowel[10] = {'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U'};
        printf("Enter your input string:");
        fgets(string, 256, stdin);
        string[strlen(string) - 1] = '\0';
        while (string[i] != '\0') {
                for (k = 0; k < 10; k++) {
                        if (vowel[k] == string[i]) {
                                result[j++] = string[i];
                                break;
                        }
                }
                i++;
        }
        result[j] = '\0';
        strcpy(string, result);
        printf("After deleting all consonants: %s\n", string);
        return 0;
 }
