#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
struct employee {
    char name[50];
    char designation[50];
    int age;
    float salary;
} employee;

int main() {
    int n, i, chars;
    FILE *fp;

    fp = fopen("employee.txt", "wb");

    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Testing fwrite() function: \n\n");

    printf("Enter the number of records you want to enter: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d \n", i + 1);

        fflush(stdin);

        printf("Name: ");
        scanf("%s",&employee.name);

        printf("Designation: ");
        scanf("%s",&employee.designation);

        printf("Age: ");
        scanf("%d", &employee.age);

        printf("Salary: ");
        scanf("%f", &employee.salary);

        chars = fwrite(&employee, sizeof(employee), 1, fp);
        printf("Number of items written to the file: %d\n", chars);
    }

    fclose(fp);
    return 0;
}