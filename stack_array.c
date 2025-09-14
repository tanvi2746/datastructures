#include <stdio.h>
#include <stdlib.h>
// program to create a stack array
int main() {
    int max=5, top=-1;
    int stack[max];
    
    void push(int val)
    {
        if(top>max)
          printf("Stack overflow");
        else
        {
            top++;
            stack[top]=val;
        }
    }
    
    int pop()
    {
        if(top<0)
          printf("\nStack underflow");
        else
        {
            int item;
            item = top;
            top--;
            return stack[item];
        }
    }
    
    void display()
    {
        printf("\nThe stack values are\n");
        for(int i=top;i>=0;i--)
            printf("\t%d",stack[i]);
    }
    
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    printf("\nThe value popped is %d",pop() );
    display();

    return 0;
}
