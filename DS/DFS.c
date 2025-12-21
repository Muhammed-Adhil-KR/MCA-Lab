#include <stdio.h>

#define MAX 20

int stack[MAX];
int top = -1;
int visited[MAX];
int adj[MAX][MAX];
int n;  // Number of vertices

void push(int item) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = item;
}

int pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

void DFS(int start) {
    int i;
    push(start);

    while (top != -1) {
        start = pop();

        if (visited[start] == 0) {
            printf("%d ", start);
            visited[start] = 1;
        }

        for (i = n; i >= 1; i--) {  // reverse order for correct traversal
            if (adj[start][i] == 1 && visited[i] == 0) {
                push(i);
            }
        }
    }
}

int main() {
    int i, j, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    for (i = 1; i <= n; i++)
        visited[i] = 0;

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("DFS traversal starting from vertex %d: ", start);
    DFS(start);

    return 0;
}
