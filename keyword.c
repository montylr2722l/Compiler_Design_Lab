#include <stdio.h>
#include <string.h>

int main() {
    char string[20]; 

    char keywords[][10] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do",
        "double", "else", "enum", "extern", "float", "for", "goto", "if",
        "int", "long", "register", "return", "short", "signed", "sizeof", "static",
        "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"
    };

    int n = sizeof(keywords) / sizeof(keywords[0]);
    int i;
    int found = 0; 

    printf("Enter a string: ");
    scanf("%s", string); 

    for (i = 0; i < n; i++) {
        if (strcmp(keywords[i], string) == 0) {
            found = 1; 
            break;
        }
    }

    if (found) {
        printf("%s is a keyword\n", string);
    } else {
        printf("%s is not a keyword\n", string);
    }

    return 0;
}   
