#include <stdio.h>
#include <string.h>


// Define a structure to hold student information
struct Student {
    char name[50];
    int age;
};

int main() {
    int num_students;

    // Ask the user to enter the number of students
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Consume the leftover newline character
    getchar();

    // Create an array of structures to hold student information
    struct Student students[num_students];

    // Ask the user to enter the name and age of each student
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Remove the newline character if it's present
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Age: ");
        scanf("%d", &students[i].age);

        // Consume the leftover newline character
        getchar();
    }

    // Display the entered information
    printf("\nEntered student information:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
    }

    return 0;
}
