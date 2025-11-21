// WACP to accept and display the details of the student in sem 1 and sem 2

#include<stdio.h>
struct sem1 {
    char sub[10];
    float marks;
};
struct sem2 {
    char sub[10];
    float marks;
};
struct student {
    char name[10];
    struct sem1 s1[20];
    struct sem2 s2[20];
}s;
int main() {
    int i,n=8;
    printf("Enter the name of the student : ");
    scanf("%s",s.name);
    printf("Enter data for Semester 1\n");
    for (i=0;i<n;i++) {
        printf("Enter the subject name : ");
        scanf("%s",s.s1[i].sub);
        printf("Enter the subject marks : ");
        scanf("%f",&s.s1[i].marks);
    }
    printf("Enter data for Semester 2\n");
    for (i=0;i<n;i++) {
        printf("Enter the subject name : ");
        scanf("%s",s.s2[i].sub);
        printf("Enter the subject marks : ");
        scanf("%f",&s.s2[i].marks);
    }
    printf("Displaying input details...\n");
    printf("Name of the student : %s\n",s.name);
    printf("Details of Semester 1 :\n");
    for (i=0;i<n;i++) {
        printf("Subject name : %s",s.s1[i].sub);
        printf("Subject marks : %f",s.s1[i].marks);
    }
    printf("Details of Semester 2 :\n");
    for (i=0;i<n;i++) {
        printf("Subject name : %s",s.s2[i].sub);
        printf("Subject marks : %f",s.s2[i].marks);
    }
}

