#include <stdio.h>

#define MAX 10   // Maximum number of elements

int parent[MAX];

// Create: Initialize each element as its own parent
void create(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
    }
    printf("Disjoint set created with %d elements.\n", n);
}

// Find with path compression
int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]); // Path compression
    }
    return parent[x];
}

// Union: Combine two sets
void unionSets(int x, int y) {
    int rootX = find(x);
    int rootY = find(y);

    if (rootX != rootY) {
        parent[rootY] = rootX; // Make one root the parent of the other
        printf("Union done: %d and %d are now in the same set.\n", x, y);
    } else {
        printf("%d and %d are already in the same set.\n", x, y);
    }
}

// Display current sets
void displaySets(int n) {
    printf("\nCurrent disjoint sets:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d -> Set Representative: %d\n", i, find(i));
    }
}

int main() {
    int n, choice, x, y;

    printf("Enter number of elements (<= %d): ", MAX);
    scanf("%d", &n);

    create(n);

    while (1) {
        printf("\n--- Disjoint Set Menu ---\n");
        printf("1. Find\n");
        printf("2. Union\n");
        printf("3. Display Sets\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter element to find: ");
            scanf("%d", &x);
            if (x >= 0 && x < n)
                printf("Representative of %d: %d\n", x, find(x));
            else
                printf("Invalid element!\n");
            break;

        case 2:
            printf("Enter two elements to union (x y): ");
            scanf("%d %d", &x, &y);
            if (x >= 0 && x < n && y >= 0 && y < n)
                unionSets(x, y);
            else
                printf("Invalid elements!\n");
            break;

        case 3:
            displaySets(n);
            break;

        case 4:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }
}
