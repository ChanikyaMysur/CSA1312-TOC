#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, len, zeroCount = 0, oneCount = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Count leading 0s
    while (i < len && str[i] == '0') {
        zeroCount++;
        i++;
    }

    // Count remaining 1s
    while (i < len && str[i] == '1') {
        oneCount++;
        i++;
    }

    // If extra characters exist, reject
    if (i != len) {
        printf("String does not belong to the CFG language\n");
        return 0;
    }

    // Check equal number of 0s and 1s
    if (zeroCount == oneCount)
        printf("String belongs to the CFG language\n");
    else
        printf("String does not belong to the CFG language\n");

    return 0;
}

