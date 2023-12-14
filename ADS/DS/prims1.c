#include <stdio.h>
#include <limits.h>

void main() {
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the cost adjacency matrix of the graph");
    int A[n][n], V[n], N[n], cost = 0, e = 0;
    for (int i = 0; i < n; i++) {
        V[i] = 0;
        N[i] = i;
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
            if (A[i][j] == 0)
                A[i][j] = INT_MAX; // Representing no edge initially
        }
    }

    V[0] = 1; // Start from the first node
    printf("Minimum cost spanning tree edges:\n");

    while (e < n - 1) {
        int min = INT_MAX, u, v;
        for (int i = 0; i < n; i++) {
            if (V[i] == 1) {
                for (int j = 0; j < n; j++) {
                    if (V[j] == 0 && A[i][j] < min) {
                        min = A[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }
        V[v] = 1;
        e++;
        cost += min;
        printf("Edge {%d, %d} = %d\n", N[u], N[v], min);
    }

    printf("Minimum cost: %d\n", cost);
}

