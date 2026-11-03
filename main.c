
#include <stdio.h>

int main() {

    char name[10][50];
    int rollno[10];
    int marks[10][5];
    int total[10];
    float average[10];
    int n;

    printf("===== STUDENT MARKS MANAGEMENT SYSTEM =====\n");

    printf("\nEnter number of students (1-10): ");
    scanf("%d", &n);

    if(n < 1 || n > 10) {
        printf("Invalid number of students!\n");
        return 0;
    }

    // Enter student details

    for(int i = 0; i < n; i++) {

        total[i] = 0;

        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter roll number: ");
        scanf("%d", &rollno[i]);

        printf("Enter marks in 5 subjects:\n");

        for(int j = 0; j < 5; j++) {

            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);

            total[i] = total[i] + marks[i][j];
        }

        average[i] = total[i] / 5.0;
    }

    // Display all student results

    printf("\n===== ALL STUDENT RESULTS =====\n");

    for(int i = 0; i < n; i++) {

        printf("\nName: %s\n", name[i]);
        printf("Roll Number: %d\n", rollno[i]);
        printf("Total Marks: %d\n", total[i]);
        printf("Average: %.2f\n", average[i]);

        if(average[i] >= 90) {
            printf("Grade: A\n");
        }
        else if(average[i] >= 75) {
            printf("Grade: B\n");
        }
        else if(average[i] >= 50) {
            printf("Grade: C\n");
        }
        else {
            printf("Grade: Fail\n");
        }
    }

    // Search student by roll number

    int searchRoll;
    int found = 0;

    printf("\nEnter roll number to search: ");
    scanf("%d", &searchRoll);

    for(int i = 0; i < n; i++) {

        if(rollno[i] == searchRoll) {

            printf("\n===== STUDENT FOUND =====\n");

            printf("Name: %s\n", name[i]);
            printf("Roll Number: %d\n", rollno[i]);
            printf("Total Marks: %d\n", total[i]);
            printf("Average: %.2f\n", average[i]);

            if(average[i] >= 90) {
                printf("Grade: A\n");
            }
            else if(average[i] >= 75) {
                printf("Grade: B\n");
            }
            else if(average[i] >= 50) {
                printf("Grade: C\n");
            }
            else {
                printf("Grade: Fail\n");
            }

            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Student not found!\n");
    }

    printf("\n===== PROGRAM ENDED =====\n");

    return 0;
}
