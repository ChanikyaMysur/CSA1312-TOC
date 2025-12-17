#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    if (str[0] == '0' && str[len - 1] == '1')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}

