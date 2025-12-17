#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, j, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    j = len - 1;

    // Count matching 0s from start and end
    while (i <= j && str[i] == '0' && str[j] == '0') {
        i++;
        j--;
    }

    // Check remaining characters are only 1s
    while (i <= j) {
        if (str[i] != '1') {
            printf("String does not belong to the CFG language\n");
            return 0;
        }
        i++;
    }

    printf("String belongs to the CFG language\n");
    return 0;
}

