#include <stdio.h>

#define MAX 30

int parent[MAX];

// Function to find the root of a vertex
int find(int i) {
    while (parent[i])
        i = parent[i];
    return i;
}

// Function to perform union operation
int union_verts(int i, int j) {
    if (i != j) {
        parent[j] = i;
        return 1;
    }
    return 0;
}

int main() {
    int cost[MAX][MAX];
    int n, i, j, k, u, v, a, b, min, ne = 1, mincost = 0;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("\nEnter the cost adjacency matrix (use 9999 if no edge):\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("Enter cost for edge %d -> %d: ", i, j);
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = 9999; // no self-loops
        }
    }

    for (i = 1; i <= n; i++)
        parent[i] = 0;

    printf("\nEdges in the Minimum Cost Spanning Tree:\n");

    while (ne < n) {
        min = 9999;

        // Step 1: Find minimum edge
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (cost[i][j] < min) {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        u = find(u);
        v = find(v);

        // Step 2: If no cycle, include this edge
        if (union_verts(u, v)) {
            printf("Edge %d: (%d -> %d)  cost = %d\n", ne++, a, b, min);
            mincost += min;
        }

        // Step 3: Mark the edge as used
        cost[a][b] = cost[b][a] = 9999;
    }

    printf("\nMinimum Cost = %d\n", mincost);
    return 0;
}
