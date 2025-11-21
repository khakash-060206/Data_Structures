// Write a function to accept and display student details

#include <stdio.h>
#define n 10

struct student {
    char name[20];
    int rno;
    float marks;
}s[n] ;

void input ();
void output ();

int main() {
    input();
    output();
}

void input () {
    for (int i=0;i<n;i++) {
        printf("Enter the student's name : ");
        scanf("%s",s[i].name);
        printf("Enter the roll number of the student : ");
        scanf("%d",&s[i].rno);
        printf("Enter the marks of the student : ");
        scanf("%f",&s[i].marks);
    }
}

void output () {
    printf("Student Information\n");
    for (int i=0;i<n;i++) {
        printf("Student Name : %s\nStudent Roll Number : %d\nStudent Marks : %f",s[i].name,s[i].rno,s[i].marks);
    }
}

