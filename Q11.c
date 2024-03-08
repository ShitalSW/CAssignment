#include <stdio.h>
#include <string.h>


struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};


void emp_init(struct Employee* e, const char* firstName, const char* lastName, double monthlySalary) {
    strcpy(e->firstName, firstName);
    strcpy(e->lastName, lastName);
    e->monthlySalary = monthlySalary;
}


void set_salary(struct Employee* e, double salary) {
    e->monthlySalary = salary;
}


void emp_display(struct Employee* e) {
    printf("First Name: %s\n", e->firstName);
    printf("Last Name: %s\n", e->lastName);
    printf("Monthly Salary: $%.2f\n", e->monthlySalary);
}


void display_yearly_salary(struct Employee* e) {
    printf("Yearly Salary for %s %s: $%.2f\n", e->firstName, e->lastName, e->monthlySalary * 12);
}


void give_raise(struct Employee* e) {
    e->monthlySalary *= 1.10;
}

int main() {
    
    struct Employee emp1, emp2;

    
    emp_init(&emp1, "John", "Doe", 5000.00);
    emp_init(&emp2, "Jane", "Smith", 6000.00);

   
    printf("Yearly Salary Before Raise:\n");
    display_yearly_salary(&emp1);
    display_yearly_salary(&emp2);

    
    give_raise(&emp1);
    give_raise(&emp2);

    
    printf("\nYearly Salary After 10%% Raise:\n");
    display_yearly_salary(&emp1);
    display_yearly_salary(&emp2);

    return 0;
}
