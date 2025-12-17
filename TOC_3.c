#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    if (str[0] == '0' && str[len - 1] == '1')
        printf("String belongs to the CFG language\n");
    else
        printf("String does not belong to the CFG language\n");

    return 0;
}

