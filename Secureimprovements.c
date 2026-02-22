

#include <stdio.h>

int main() {

    /* declare variable for foodExpenses without assigning a value it */
    float foodExpenses;

    // Prompt the user to enter food expenses
    printf("\n Enter food expenses: ");

    // Take input from the user for food expenses
    scanf(" %f", &foodExpenses);

    // Secure improvement:
    // Input validation was added to prevent negative values
    // This improves reliability and avoids incorrect calculations
    if (foodExpenses < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("\nFood expense recorded: £%.2f\n", foodExpenses);

    return 0;
}