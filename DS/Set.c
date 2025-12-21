#include <stdio.h>

#define SIZE 8   // Universal set size

// Print a set represented by a bit string
void printSet(int set[]) {
    printf("{ ");
    for (int i = 0; i < SIZE; i++) {
        if (set[i] == 1)
            printf("%d ", i);
    }
    printf("}\n");
}

int main() {
    int A[SIZE], B[SIZE];
    int Union[SIZE], Intersection[SIZE], Difference[SIZE];

    // Read Set A
    printf("Enter elements of Set A as 0 or 1 for indices 0 to %d:\n", SIZE - 1);
    for (int i = 0; i < SIZE; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    // Read Set B
    printf("\nEnter elements of Set B as 0 or 1 for indices 0 to %d:\n", SIZE - 1);
    for (int i = 0; i < SIZE; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    // Union (A ∪ B)
    for (int i = 0; i < SIZE; i++) {
        Union[i] = A[i] | B[i];
    }

    // Intersection (A ∩ B)
    for (int i = 0; i < SIZE; i++) {
        Intersection[i] = A[i] & B[i];
    }

    // Difference (A - B)
    for (int i = 0; i < SIZE; i++) {
        Difference[i] = A[i] & (!B[i]);
    }

    printf("\nSet A: ");
    printSet(A);
    printf("Set B: ");
    printSet(B);

    printf("\nA ∪ B (Union): ");
    printSet(Union);

    printf("A ∩ B (Intersection): ");
    printSet(Intersection);

    printf("A - B (Difference): ");
    printSet(Difference);

    return 0;
}