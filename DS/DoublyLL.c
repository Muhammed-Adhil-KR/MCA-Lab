#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head=NULL;

void createNode(int value)  //Insert at end
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    newNode->prev=NULL;

    if(head==NULL)
    {
        head=newNode;
    }
    else{
        struct Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
    }
}
void insertAtBeginning(int value)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    newNode->prev=NULL;
    if(head!=NULL)
    {
        head->prev=newNode;
    }
    head=newNode;
}
void deleteFromBeginning()
{
    
}