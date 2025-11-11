// Write a program to compare marks of 2 students. Display who scored the highest marks

#include<stdio.h>

typedef struct {
    char name[20];
    int rno;
    float marks;
}student ;

int main() {
    
    student s[2];
    
    for (int i=0;i<2;i++) {
        printf("Enter the name of student %d : ",i+1);
        scanf("%s",s[i].name);
        printf("Enter the roll number of student %d : ",i+1);
        scanf("%d",&s[i].rno);
        printf("Enter the marks of student %d : ",i+1);
        scanf("%f",&s[i].marks);
    }

    if (s[0].marks>s[1].marks) {
        printf("%s has higher marks than %s.",s[0].name,s[1].name);
    }
    else {
        printf("%s has higher marks than %s.",s[1].name,s[0].name);
    }
}