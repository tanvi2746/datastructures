#include <stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};
struct node *neww=NULL;
struct node *head=NULL;
struct node *end=NULL;


// insert at begginig
void start(int val)
{
    neww=(struct node*) malloc(sizeof(struct node));
    neww->data=val;
    head=neww;
    end=neww;
}
void last(int val)
{
     neww=(struct node*) malloc(sizeof(struct node));
    neww->data=val;
    if(head==NULL)
    {
        head=neww;
        end=neww;
        return;
    }
    end->next=neww;//link
    end=neww;//move end
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
    printf("%d---->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
void delfirst()
{
    struct node *temp;
    temp=head;
    head=temp->next;
    free( temp);
}
void delend()
{
    struct node *temp, *temp1;
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    printf("%d",temp->data);
    temp1=temp->next;
    end=temp;
    end->next=NULL;
    free(temp1);
}

int main() {
   start(5);
   last(10);
   last(20);
   last(30);
   last(40);
   display();
   printf("\n");
   
   delfirst();
   display();
   printf("\n");
   delend();
   display();
   printf("\n");  
}
