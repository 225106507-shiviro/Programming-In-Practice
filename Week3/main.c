#include <stdio.h>

int main()
{
    // Variables declared exactly like the examples
    char studentName[50];
    float test1;
    float test2;
    float assignment;
    float total;

    // 1. Inputs: Using the exact scanf patterns from your notes
    printf("Enter student name: ");
    scanf("%49s", studentName);

    printf("Enter Test 1 mark: ");
    scanf("%f", &test1);

    printf("Enter Test 2 mark: ");
    scanf("%f", &test2);

    printf("Enter Assignment mark: ");
    scanf("%f", &assignment);

    // 2. Calculation
    total = test1 + test2 + assignment;

    // 3. Output Header
    printf("\nSupplier: %s\n", studentName); // Matching print style from page 17
    printf("Total Mark: %.2f\n", total);

    // 4. Grading Logic: Copied exactly from the if...else if...else structure on page 14
    if (total >= 75)
    {
        printf("Result: Distinction\n");
    }
    else if (total >= 60)
    {
        printf("Result: Credit\n");
    }
    else if (total >= 50)
    {
        printf("Result: Pass\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    return 0;
}
