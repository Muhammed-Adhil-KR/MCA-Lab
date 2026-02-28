#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insertNode(struct Node* root) {
    int value;
    printf("\nEnter value to insert: ");
    scanf("%d", &value);

    struct Node* newNode = createNode(value);
    struct Node* curr = root;
    int ch;
    while (1) {
        printf("\nAt Node %d: insert to left(0) or right(1)? ", curr->data);
        scanf("%d", &ch);

        if (ch == 0) {
            if (curr->left == NULL) {
                curr->left = newNode;
                printf("\n%d inserted to the left of %d\n", value, curr->data);
                break;
            } else {
                curr = curr->left;
            }
        } else if (ch == 1) {
            if (curr->right == NULL) {
                curr->right = newNode;
                printf("\n%d inserted to the right of %d\n", value, curr->data);
                break;
            } else {
                curr = curr->right;
            }
        } else {
            printf("\nInvalid choice! Enter 0 or 1.\n");
        }
    }
}

struct Node* deleteNode(struct Node* root, int key) {
    if (!root) {
        printf("\nNode %d not found.\n", key);
        return NULL;
    }

    if (root->data == key) {
        // Case 1: Leaf node
        if (!root->left && !root->right) {
            printf("%d deleted.\n", root->data);
            free(root);
            return NULL;
        }
        // Case 2: Only left child
        if (root->left && !root->right) {
            struct Node* temp = root->left;
            printf("%d deleted.\n", root->data);
            free(root);
            return temp;
        }
        // Case 3: Only right child
        if (!root->left && root->right) {
            struct Node* temp = root->right;
            printf("%d deleted.\n", root->data);
            free(root);
            return temp;
        }

        // Case 4: Two children - deletion not supported here
        printf("\nNode %d has two children, can't delete directly.\n", key);
        return root;
    }

    // Recurse left and right to find node to delete
    root->left = deleteNode(root->left, key);
    root->right = deleteNode(root->right, key);

    return root;
}

void inorder(struct Node* root) {
    if (!root) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(struct Node* root) {
    if (!root) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main() {
    struct Node* root = NULL;
    int value, choice;

    while (1) {
        printf("\n--- Binary Tree Menu ---\n");
        printf("\t1. Create root\n");
        printf("\t2. Insert node\n");
        printf("\t3. Delete node\n");
        printf("\t4. Inorder traversal\n");
        printf("\t5. Preorder traversal\n");
        printf("\t6. Postorder traversal\n");
        printf("\t0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (root == NULL) {
                    printf("\nEnter root value: ");
                    scanf("%d", &value);
                    root = createNode(value);
                    printf("\nRoot %d created\n", value);
                } else {
                    printf("\nRoot already exists.\n");
                }
                break;

            case 2:
                if (root == NULL) {
                    printf("\nTree is empty. Create root first!\n");
                } else {
                    insertNode(root);
                }
                break;

            case 3:
                if (root == NULL) {
                    printf("\nTree is empty!\n");
                } else {
                    printf("\nEnter the value to delete: ");
                    scanf("%d", &value);
                    root = deleteNode(root, value);
                }
                break;

            case 4:
                if (root == NULL) {
                    printf("\nTree is empty!\n");
                } else {
                    printf("\nInorder: ");
                    inorder(root);
                    printf("\n");
                }
                break;

            case 5:
                if (root == NULL) {
                    printf("\nTree is empty!\n");
                } else {
                    printf("\nPreorder: ");
                    preorder(root);
                    printf("\n");
                }
                break;

            case 6:
                if (root == NULL) {
                    printf("\nTree is empty!\n");
                } else {
                    printf("\nPostorder: ");
                    postorder(root);
                    printf("\n");
                }
                break;

            case 0:
                printf("\nExiting...\n");
                exit(0);

            default:
                printf("\nInvalid choice!\n");
        }
    }
    return 0;
}
