#include <stdio.h>

int main() {
    int n, i, j;
    int epsilon[10][10];

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter epsilon transitions matrix (1 if e-move exists, else 0):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &epsilon[i][j]);
        }
    }

    printf("\nEpsilon-closures:\n");

    for (i = 0; i < n; i++) {
        printf("e-closure(q%d) = { q%d", i, i);

        for (j = 0; j < n; j++) {
            if (epsilon[i][j] == 1)
                printf(", q%d", j);
        }
        printf(" }\n");
    }

    return 0;
}

