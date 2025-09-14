#include <stdio.h>
#include<stdlib.h>

// program to create a Queue Linked List
struct node
{
    int data;
    struct node *next;
};
struct node *neww=NULL;
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int val)
{
     neww=(struct node*) malloc(sizeof(struct node));
    neww->data=val;
    neww->next=NULL;
    if(front==NULL)
    {
        front=neww;
        rear=neww;
        return;
    }
    rear->next=neww;//link
    rear=neww;//move end
}
void display()
{
    struct node *temp;
    temp=front;
    while(temp!=NULL)
    {
    printf("%d---->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
void dequeue()
{
    struct node *temp;
    temp=front;
    front=temp->next;
    free( temp);
}

int main() {
   
   enqueue(10);
   enqueue(20);
   enqueue(30);
   enqueue(40);
   display();
   printf("\n");
   dequeue();
   display();
   return 0;  
}
