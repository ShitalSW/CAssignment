#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50


int compare_names(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() {
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numStudents;

    printf("Enter the number of students (maximum 10): ");
    scanf("%d", &numStudents);
    getchar(); 

    if (numStudents > MAX_STUDENTS) {
        printf("Number of students exceeds the maximum limit. Setting it to %d\n", MAX_STUDENTS);
        numStudents = MAX_STUDENTS;
    }

    
    printf("Enter names of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        fgets(nameOfStudents[i], MAX_NAME_LENGTH, stdin);
        
        nameOfStudents[i][strcspn(nameOfStudents[i], "\n")] = '\0';
    }

    
    qsort(nameOfStudents, numStudents, sizeof(nameOfStudents[0]), compare_names);

    
    printf("\nSorted names of students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
