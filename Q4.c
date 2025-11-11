// Write a program to push or pop an element in a stack

#include<stdio.h>
# define max 3

int stack[max], top=-1;

void push(int a) {
    if(top>=max-1) {
        printf("Stack is full. Can't push.");
    }
    else {
        top++;
        stack[top]=a;
    }
}

void pop() {
    if(top==-1) {
        printf("Stack is empty. Can't pop.");
    }
    else {
        top--;
    }
}

void display() {
    for(int i=0;i<=top;i++) {
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int main() {
    push(20);
    push(40);
    push(30);
    display();
    pop();
    display();
}