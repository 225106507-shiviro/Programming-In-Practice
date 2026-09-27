#include <stdio.h>
#include <string.h>

int main() {

    // MODULE A: EMPLOYEE SALARIES
    float salaries[50];
    float total = 0;
    float average;
    float highest;
    float lowest;
    float search;
    int found = 0;
    float temp;

    // 1. Capture 50 salaries using a loop
    printf("--- SECTION A: EMPLOYEE SALARIES ---\n");
    for (int i = 0; i < 50; i++) {
        printf("Enter salary %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    // 2. Display all salaries (Original Order)
    printf("\nCaptured Salaries:\n");
    for (int i = 0; i < 50; i++) {
        printf("Employee %d: %.2f\n", i + 1, salaries[i]);
    }

    // 3. Calculate the total salary
    for (int i = 0; i < 50; i++) {
        total = total + salaries[i];
    }

    // 4. Calculate average
    average = total / 50;

    // 5. Find highest and lowest salary
    highest = salaries[0];
    lowest = salaries[0];
    for (int i = 0; i < 50; i++) {
        if (salaries[i] > highest) {
            highest = salaries[i];
        }
        if (salaries[i] < lowest) {
            lowest = salaries[i];
        }
    }

    // Print the results
    printf("\nTotal salary: %.2f\n", total);
    printf("Average salary: %.2f\n", average);
    printf("Highest salary: %.2f\n", highest);
    printf("Lowest salary: %.2f\n", lowest);

    // 6. Search for a salary
    printf("\nEnter a salary to search: ");
    scanf("%f", &search);

    for (int i = 0; i < 50; i++) {
        if (salaries[i] == search) {
            found = 1;
            printf("Value found at position %d\n", i);
            break;
        }
    }
    if (found == 0) {
        printf("Value not found.\n");
    }

    // MODULE B: DEPARTMENT BUDGETS (MISSING)
    printf("\n--- SECTION B: DEPARTMENT BUDGETS ---\n");
    float budgets[10];
    float totalBudget = 0;
    float averageBudget;

    // 1. Capture 10 budgets
    for (int i = 0; i < 10; i++) {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
        totalBudget += budgets[i]; // Accumulate total budget
    }

    // 2. Display the budgets
    printf("\nDepartment Budgets:\n");
    for (int i = 0; i < 10; i++) {
        printf("Department %d: %.2f\n", i + 1, budgets[i]);
    }

    // 3. Calculate total and average
    averageBudget = totalBudget / 10;
    printf("\nTotal Budget: %.2f\n", totalBudget);
    printf("Average Budget: %.2f\n", averageBudget);

    // 4. Sort budgets from lowest to highest
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
                float budgetTemp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = budgetTemp;
            }
        }
    }

    printf("\nSorted Budgets (Lowest to Highest):\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f\n", budgets[i]);
    }

    // MODULE C: VEHICLE REGISTRATIONS (MISSING)
    printf("\n--- SECTION C: VEHICLE REGISTRATIONS ---\n");
    char registrations[20][20]; // 20 strings, up to 19 characters each
    char searchReg[20];
    int regFound = 0;

    // 1. Capture 20 registration numbers
    for (int i = 0; i < 20; i++) {
        printf("Enter registration number %d: ", i + 1);
        scanf("%s", registrations[i]);
    }

    // 2. Display all registration numbers
    printf("\nAll Registered Vehicles:\n");
    for (int i = 0; i < 20; i++) {
        printf("Vehicle %d: %s\n", i + 1, registrations[i]);
    }

    // 3. Search for a particular registration number
    printf("\nEnter a vehicle registration to search: ");
    scanf("%s", searchReg);

    for (int i = 0; i < 20; i++) {
        // strcmp returns 0 if strings match perfectly
        if (strcmp(registrations[i], searchReg) == 0) {
            regFound = 1;
            printf("Registration found at vehicle position %d\n", i + 1);
            break;
        }
    }
    if (regFound == 0) {
        printf("Registration not found.\n");
    }

    return 0;
}
