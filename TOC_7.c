#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (strstr(str, "101") != NULL)
        printf("String belongs to the CFG language\n");
    else
        printf("String does not belong to the CFG language\n");

    return 0;
}

