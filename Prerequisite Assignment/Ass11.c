// Q11. Create a structure called Employee that includes three fields - a first
// name (type String), a last name (type String) and a monthly salary (double).
// Write functions to initialize the fields, print them and modify the values in
// the given object. Example methods:
//  void emp_init(struct emp* e);
//  void set_salary(struct emp *e, double sal);
//  void emp_display(struct emp *e);
// Write the test code in the main(). Create two emp objects and display each
// object’s yearly salary. Then give each Employee a 10% raise and display
// each Employee’s yearly salary again.

#include <stdio.h>
#include <string.h>

typedef struct {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
} Employee;

void initializeEmployee(Employee *emp, const char *firstName, const char *lastName, double salary) {
    strcpy(emp->firstName, firstName);
    strcpy(emp->lastName, lastName);
    emp->monthlySalary = salary;
}

void printEmployee(const Employee *emp) {
    printf("First Name: %s\n", emp->firstName);
    printf("Last Name: %s\n", emp->lastName);
    printf("Monthly Salary: $%.2f\n", emp->monthlySalary);
}

void modifyEmployee(Employee *emp, const char *firstName, const char *lastName, double salary) {
    strcpy(emp->firstName, firstName);
    strcpy(emp->lastName, lastName);
    emp->monthlySalary = salary;
}

int main() {

    Employee emp;

    initializeEmployee(&emp, "Yash", "Gaikwad", 5000.00);

    
    printf("Initial Employee Details:\n");
    printEmployee(&emp);

    
    modifyEmployee(&emp, "Vishal", "Borse", 6000.00);

    
    printf("\nModified Employee Details:\n");
    printEmployee(&emp);

    return 0;
}
