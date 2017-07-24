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
    int m=0,m1=0,k1=0,k2=0,i=0,j=0;
    struct node* res = NULL;
    struct node* a = NULL;
    struct node* b = NULL;

    printf("Enter the number of elements in first List\n\n");
    scanf("%d",&m);
    printf("Enter elements one by one \n");
    for(i=0;i<m;i++)
     {
          scanf("%d",&k1);
          push(&a,k1);
     }


printf("Enter the number of elements in Second List \n\n");
    scanf("%d",&m1);
    printf("Enter elements one by one\n\n");
    for(j=0;j<m1;j++)
     {
          scanf("%d",&k2);
          push(&a,k2);
     }



    res = SortedMerge(a, b);

    printf("Merged Linked List is: \n");
    printList(res);

    return 0;
}
