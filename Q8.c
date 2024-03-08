#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 50

typedef struct {
    char studentName[MAX_LENGTH];
    char rollNo[MAX_LENGTH];
    int totalMarks;
} Student;


void readStudentData(Student *student) {
    printf("Enter student name: ");
    fgets(student->studentName, MAX_LENGTH, stdin);

    printf("Enter roll number: ");
    fgets(student->rollNo, MAX_LENGTH, stdin);

    printf("Enter total marks: ");
    scanf("%d", &student->totalMarks);
}


void displayStudentData(Student student) {
    printf("\nStudent Name: %s", student.studentName);
    printf("Roll Number: %s", student.rollNo);
    printf("Total Marks: %d\n", student.totalMarks);
}

int main() {
    Student student;

    printf("Enter student details:\n");
    readStudentData(&student);

    printf("\nStudent details as entered:\n");
    displayStudentData(student);

    return 0;
}
