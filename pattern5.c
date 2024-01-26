#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int m = n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            printf("%d ", j);
        }
        printf("\n");
        m--;
    }

    return 0;
}