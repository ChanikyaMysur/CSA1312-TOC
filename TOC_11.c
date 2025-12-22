#include <stdio.h>

int n;
int eps[10][10];
int visited[10];

void findClosure(int state) {
    int j;
    for (j = 0; j < n; j++) {
        if (eps[state][j] == 1 && !visited[j]) {
            visited[j] = 1;
            findClosure(j);
        }
    }
}

int main() {
    int i, j;

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter epsilon transition matrix (1 if e-move, else 0):\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &eps[i][j]);

    printf("\nEpsilon Closures:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            visited[j] = 0;

        visited[i] = 1;
        findClosure(i);

        printf("e-closure(q%d) = { ", i);
        for (j = 0; j < n; j++) {
            if (visited[j])
                printf("q%d ", j);
        }
        printf("}\n");
    }

    return 0;
}

