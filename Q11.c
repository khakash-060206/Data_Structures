// Write a program to calculate the total salary of n employees using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee *e;
    int n,i;
    float s=0.0;
    printf("Enter the number of employees : ");
    scanf("%d",&n);
    e=(struct Employee *)malloc(n*sizeof(struct Employee));
    if(e!=NULL) {
        printf("Memory allocation successful\n");
    }
    else {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("Enter the details of the employees\n");
    for (i=0;i<n;i++) {
        printf("Enter the name of employee %d : ",i+1);
        scanf("%s",e[i].name);
        printf("Enter the id of employee %d : ",i+1);
        scanf("%d",&e[i].id);
        printf("Enter the salary of employee %d : ",i+1);
        scanf("%f",&e[i].salary);
    }
    for (i=0;i<n;i++) {
        s+=e[i].salary;
    }
    printf("Total salary of %d employees is %0.2f",n,s);
    free(e);
    return 0;
}