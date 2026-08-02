#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;  
    char filename[100];
    int ch;
    int freq[256] = {0};

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        freq[ch]++;
    }
    fclose(file);

    printf("\nCharacter frequencies:\n");
    
    
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            if (i >= 32 && i <= 126) {
                printf(" '%c' : %d\n", i, freq[i]);
            } else {
                printf(" ASCII %d : %d\n", i, freq[i]);
            }
        }
    }
    return 0;
}   