#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *top = NULL;
Node *createNode(int value)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;
    return node;
}

void push(int value)
{
    Node *newNode = createNode(value);
    newNode->data=value;
    if (!top)
    {
        top = newNode;
        top->next = NULL;
    }
    else
    {
        newNode->next = top;
    }

    top = newNode;
}

void pop()
{
    Node *temp = top;
    if (top)
    {

        top = top->next;

        printf("%d is popped", temp->data);
        free(temp);
    }
    else
    {
        printf("stack is empty\n");
    }
}

void display()
{
    Node *temp = top;
    while (temp)
    {
        printf("| %d |\n", temp->data);
        temp = temp->next;
    }
}

int count()
{
    Node *temp = top;
    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main(void)
{
    int choice, value;
    while (1)
    {
        printf("\n********MENU*******\n");
        printf("1.Push\n2.Pop\n3.Traverse\n4.Count\n5.Exit\n");
        printf("\nEnter the choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the element to insert\n");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nNumber of elements is: %d", count());
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice\n");

            break;
        }
    }
    return 0;
}
