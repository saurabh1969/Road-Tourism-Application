#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


struct node
{
    int data;
    struct node* next;
};


void MoveNode(struct node** destRef, struct node** sourceRef);

struct node* SortedMerge(struct node* a, struct node* b)
{

    struct node dummy;

    struct node* tail = &dummy;


    dummy.next = NULL;
    while (1)
    {
        if (a == NULL)
        {

            tail->next = b;
            break;
        }
        else if (b == NULL)
        {
            tail->next = a;
            break;
        }
        if (a->data <= b->data)
            MoveNode(&(tail->next), &a);
        else
            MoveNode(&(tail->next), &b);

        tail = tail->next;
    }
    return(dummy.next);
}


void MoveNode(struct node** destRef, struct node** sourceRef)
{

    struct node* newNode = *sourceRef;
    assert(newNode != NULL);


    *sourceRef = newNode->next;


    newNode->next = *destRef;


    *destRef = newNode;
}



void push(struct node** head_ref, int new_data)
{

    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));


    new_node->data  = new_data;


    new_node->next = (*head_ref);


    (*head_ref)    = new_node;
}


void printList(struct node *node)
{
    while (node!=NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}


int main()
{

    struct node* res = NULL;
    struct node* a = NULL;
    struct node* b = NULL;
    cou


    push(&a, 15);
    push(&a, 10);
    push(&a, 5);

    push(&b, 20);
    push(&b, 3);
    push(&b, 2);


    res = SortedMerge(a, b);

    printf("Merged Linked List is: \n");
    printList(res);

    return 0;
}
