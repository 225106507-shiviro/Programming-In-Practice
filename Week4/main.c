#include <stdio.h>

int main()
{
    // Variable declaration
    char studentName[50];
    float test1;
    float test2;
    float assignment;
    float total;

    // Inputs
    printf("Enter student name: ");
    scanf("%49s", studentName);

    printf("Enter Test 1 mark: ");
    scanf("%f", &test1);

    printf("Enter Test 2 mark: ");
    scanf("%f", &test2);

    printf("Enter Assignment mark: ");
    scanf("%f", &assignment);

    // Calculation
    total = test1 + test2 + assignment;

    // Output Header
    printf("\nSupplier: %s\n", studentName); 
    printf("Total Mark: %.2f\n", total);

    // Grading
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
