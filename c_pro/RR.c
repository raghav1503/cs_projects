#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m, i, j, k;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter the number of resource types: ");
    scanf("%d", &m);

    int allocation[n][m], max[n][m], available[m], need[n][m];
    int work[m];
    bool finish[n];
    int safeSequence[n];
    int index = 0;

    printf("Enter the allocation matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &allocation[i][j]);
        }
    }

    printf("Enter the max matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &max[i][j]);
        }
    }

    printf("Enter the available:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &available[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
    for (i = 0; i < m; i++) {
        work[i] = available[i];
    }
    for (i = 0; i < n; i++) {
        finish[i] = false;
    }
    while (index < n) {
        bool found = false;
        for (i = 0; i < n; i++) {
            if (!finish[i]) {
                bool possible = true;
                for (j = 0; j < m; j++) {
                    if (need[i][j] > work[j]) {
                        possible = false;
                        break;
                    }
                }
            if (possible) {
                    for (k = 0; k < m; k++) {
                        work[k] += allocation[i][k];
                    }
                    safeSequence[index++] = i;
                    finish[i] = true;
                    found = true;
                }
            }
        }

        if (!found) {
            break;
        }
    }

    bool safe = true;
    for (i = 0; i < n; i++) {
        if (!finish[i]) {
            safe = false;
            break;
        }
    }

    if (safe) {
        printf("The system is in a safe state.\nSafe sequence is: ");
        for (i = 0; i < n; i++) {
            printf("P%d ", safeSequence[i] + 1);
        }
        printf("\n");
    } else {
        printf("The system is not in a safe state.\n");
    }
    printf("\nProcess\t\tAllocation\t\tMax\t\tNeed\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t\t", i + 1);
        for (j = 0; j < m; j++) {
            printf("%d ", allocation[i][j]);
        }
        printf("\t\t");
        for (j = 0; j < m; j++) {
            printf("%d ", max[i][j]);
        }
        printf("\t\t");
        for (j = 0; j < m; j++) {
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }

    return 0;
}