#include <stdio.h>

int main() {

    float foodExpenses = 250.0;
    float leisureExpenses = 80.0;
    float clothesExpenses = 120.0;
    float accommodationExpenses = 500.0;
    float travelExpenses = 60.0;
    float totalSpent;

    totalSpent = foodExpenses + leisureExpenses + clothesExpenses +
                 accommodationExpenses + travelExpenses;

    printf("The total expenditure this month was £%.2f\n", totalSpent);

    return 0;
}