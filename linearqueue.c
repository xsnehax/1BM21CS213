#include<stdio.h>
#include<stdlib.h>
#define size 3
int queue[size];
int front=-1; int rear=-1;
void insert();
void delete();
void display();
void main(){
    int choice;
    while(1){
        printf("\n Enter choice \n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit");
        scanf("%d",&choice);
        switch(choice){
            case 1:insert();
                break;
            case 2:delete();
                break;
            case 3:display();
                break;
            case 4:exit(0);
            default:printf("Invalid choice:");
        }
    }
    return 0;
}
void insert(){
    int val;
    if(rear==size-1||rear==front-1){
        printf("Stack overflow");
    }
    else{
        printf("Enter a value:");
        scanf("%d",&val);
        if(front==-1&&rear==-1){
            front=rear=0;
        }
        else{
            rear+=1;
        }
    }
    queue[rear]=val;
}
void delete(){
    int val;
    if(front==-1&&rear==-1){
        printf("Queue is empty");
    }
    val=queue[front];
    if(front==rear){
        front=rear=-1;
    }
    else{
        front+=1;
    }
}
void display(){
    if(front==-1&&rear==-1){
        printf("\nQueue is empty");
    }
    for(int i=front;i<=rear;i++){
        printf("%d\t",queue[i]);
    }
}
