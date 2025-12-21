#include <stdio.h>

#define MAX 20

int queue[MAX], front = -1, rear = -1;
int visited[MAX];

// Function to add element to queue
void enqueue(int v) {
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if (front == -1)
            front = 0;
        queue[++rear] = v;
    }
}

// Function to remove element from queue
int dequeue() {
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}

// Function for Breadth First Search
void BFS(int adj[MAX][MAX], int n, int start) {
    int i, v;
    for (i = 1; i <= n; i++)
        visited[i] = 0;

    enqueue(start);
    visited[start] = 1;

    printf("BFS Traversal starting from vertex %d: ", start);

    while ((v = dequeue()) != -1) {
        printf("%d ", v);
        for (i = 1; i <= n; i++) {
            if (adj[v][i] == 1 && visited[i] == 0) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

int main() {
    int adj[MAX][MAX];
    int n, e, i, j, u, v, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Initialize adjacency matrix
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            adj[i][j] = 0;

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (u v) for each edge:\n");
    for (i = 1; i <= e; i++) {
        scanf("%d%d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1; // Remove this line if graph is directed
    }

    printf("Enter starting vertex for BFS: ");
    scanf("%d", &start);

    BFS(adj, n, start);

    return 0;
}
