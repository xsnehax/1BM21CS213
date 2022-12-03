#include<stdio.h>
#include<stdlib.h>
#define max 6
int queue[max];
int front=-1;
int rear=-1;

void enqueue(int element)
{

    if(front==-1 && rear == -1)
    {
        front=0;
        rear=0;
        queue[rear]=element;
    }
    else if((rear+1)%max==front)
    {
        printf("queue is overflow");
    }
    else{
        rear=(rear+1)%max;
        queue[rear]=element;
    }
}

int dequeue()
{

    if((front==-1)&&(rear==-1))
    {

        printf("\n queue is underflow");
    }
    else if(front==rear)
    {
        printf("\n the dequeued element is %d", queue[front]);
    front=-1;
    rear=-1;
    }
    else{
        printf("\n the dequeued element is %d", queue[front]);
        front=(front+1)%max;
    }
}

void display()
{

    int i=front;
    if(front==-1 && rear==-1)
       {
           printf("\n queue is empty");
       }
        else
            {
            printf("\n elements in a queue are:");
        while(i<=rear)
        {
            printf("%d\n", queue[i]);
            i=(i+1)%max;
        }
        }
}

int main()
{

    int choice=1,x;

    while(1)
    {
        printf("\n 1. insert an element\n");
         printf("\n 2. delete an element\n");
          printf("\n 3. display all elements\n");
           printf("\n 4. exit \n");
            printf("\n enter your choice");
            scanf("%d", &choice);

           switch(choice)
           {

               case 1 :  printf("\n enter element to be inserted\n");
               scanf("%d",&x);
               enqueue(x);
               break;

               case 2 : dequeue();
               break;

                   case 3: display();
                   break;
                   case 4: exit(0);
                   break;
                   default : printf("enter a valid choice");
           }
    }
    return(0);
}
