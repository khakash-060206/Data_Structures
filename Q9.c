// Circular Queue

#include<stdio.h>
#define size 5

int queue[size], front=-1, rear=-1;

int isfull() {
    if(front==rear+1 || (front==0 && rear==size-1)) {
        return 1;
    }
    return 0;
}

int isempty() {
    if(front==-1) {
        return 1;
    }
    return 0;
}

void enqueue(int ele) {
    if(isfull()) {
        printf("Queue is full\n");
    }
    else {
        if(front==-1) {
            front=0;
        }
        rear=(rear+1)%size;
        queue[rear]=ele;
        printf("Inserted %d to queue\n",ele);
    }
}

void dequeue() {
    int element;
    if(isempty()) {
        printf("Queue is empty\n");
    }
    else {
        element=queue[front];
        if(front==rear) {
            front=rear=-1;
        }
        else {
            front=(front+1)%size;
        }
        printf("%d deleted from queue",element);
    }
}

void display() {
    int i;
    if(isempty()) {
        printf("\nQueue is empty\n");
    }
    else {
        printf("\nFront : %d",front);
        printf("\nQueue elements are :\n");
        for(i=front;i!=rear;i=(i+1)%size) {
            printf("%d ",queue[i]);
        }
        printf("%d ",queue[rear]);
        printf("\nRear : %d\n",rear);
    }
}

int main() {
    int value, choice;
    while(1) {
        printf("Select choice : 1. Enqueue\t2.Dequeue\t3.Display\t4.Exit\n");
        scanf("%d",&choice);
        switch(choice) {
            case 1 : {
                printf("Enter value : ");
                scanf("%d",&value);
                enqueue(value);
                break;
            }
            case 2 : {
                dequeue();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                printf("Exiting...");
                return 0;
            }
            default : {
                printf("Invalid choice");
                break;
            }
                    
        }
    }
    return 0; 
}