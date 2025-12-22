#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    if (str[0] == 'b' && str[len - 1] == 'a')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}

