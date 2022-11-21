WEEK 1

Program:

#include<stdio.h>
#include<conio.h>
#define SIZE 3
int STACK[SIZE],TOP=-1,ITEM;
void push();
void pop();
void display();

int main()
{
    int choice;
    while(1)
    {
        if("\n\n 1:Push\n 2:Pop \n 3: Display\n 4:Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit();
            break;
            default:printf("Wrong Choice");
        }
    }
    getch();
    return(0);
}
void push()
{
    if(TOP==SIZE-1)
    {
        printf("Stack Overflow");
        return;
    }
    else
    {
        printf("Enter an element\n");
        scanf("%d",&ITEM);
        printf("Entered element is %d\n\n",ITEM);
        TOP=TOP+1;
        STACK[TOP]=ITEM;
    }
}
void pop()
{
    int del;
    if(TOP==-1)
    {
        printf("Stack Underflow");
        return;
    }
    else
    {
        del=STACK[TOP];
        printf("Popped element is %d\n",del);
        TOP=TOP-1;
    }
}
void display()
{
    int i;
    if(TOP==-1)
    {
        printf("Stack is Empty\n");
        return;
    }
    else
    {
        for(i=TOP;i>=0;i--)
            printf("%d\n",STACK[i]);
    }
}


Output:
 
