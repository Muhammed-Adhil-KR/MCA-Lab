#include <stdio.h>
#define INF 9999
#define MAX 10

int main() {
    int cost[MAX][MAX], near[MAX], t[MAX][2];
    int i, j, k, l, n;
    int mincost = 0, min;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost adjacency matrix (9999 if no edge):\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &cost[i][j]);
        }
    }

    // Step 1: Find edge (k, l) with minimum cost
    min = INF;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (cost[i][j] < min && i != j) {
                min = cost[i][j];
                k = i;
                l = j;
            }
        }
    }

    t[1][1] = k;
    t[1][2] = l;
    mincost = cost[k][l];

    // Step 2: Initialize near[]
    for (i = 1; i <= n; i++) {
        if (cost[i][k] < cost[i][l])
            near[i] = k;
        else
            near[i] = l;
    }
    near[k] = near[l] = 0;  // mark included vertices

    // Step 3: Repeat n-2 times
    for (i = 2; i <= n - 1; i++) {
        min = INF;
        for (j = 1; j <= n; j++) {
            if (near[j] != 0 && cost[j][near[j]] < min) {
                min = cost[j][near[j]];
                k = j;
            }
        }

        // Add edge to tree
        t[i][1] = k;
        t[i][2] = near[k];
        mincost = mincost + cost[k][near[k]];
        near[k] = 0;

        // Update near[]
        for (j = 1; j <= n; j++) {
            if (near[j] != 0 && cost[j][near[j]] > cost[j][k])
                near[j] = k;
        }
    }

    // Step 4: Print results
    printf("\nEdges in Minimum Cost Spanning Tree:\n");
    for (i = 1; i <= n - 1; i++)
        printf("Edge %d: (%d, %d)\n", i, t[i][1], t[i][2]);

    printf("Minimum cost = %d\n", mincost);

    return 0;
}
