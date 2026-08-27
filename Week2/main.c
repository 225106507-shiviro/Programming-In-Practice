#include <stdio.h>

int main(){

// Title
printf("MUNICIPAL BUDGET CALCULATOR\n");

//Declare variables
double revenue=0;
double expense=0;
double balance=0;
int departments=0;
double payroll=0;
double procurement=0;
double assets=0;

//Prompt user for revenue
printf("Please enter the total revenue");
scanf("%lf", &revenue);

//Prompt user for expense
printf("Please enter the total expense");
scanf("%lf", &expense);

//Prompt user for departments
printf("Please enter the departments");
scanf("%d", &departments);

//Prompt user for payroll
printf("Please enter the payroll");
scanf("%lf", &payroll);

//Prompt user for procurement
printf("Please enter the procurement");
scanf("%lf", &procurement);

//Prompt user for assets
printf("Please enter the assets");
scanf("%lf", &assets);

//Calculate the balance
balance=revenue-expense;

//Display the values
printf("\n--- MUNICIPAL FINANCIAL SUMMARY ---\n");
printf("Total Revenue: %.2f\n", revenue);
printf("Total Expense: %.2f\n", expense);
printf("Balance: %.2f\n ", balance);
printf("departments: %d\n", departments);
printf("payroll: %.2f\n", payroll);
printf("procurement: %.2f\n", procurement);
printf("assets: %.2f\n", assets);
    return 0;
}