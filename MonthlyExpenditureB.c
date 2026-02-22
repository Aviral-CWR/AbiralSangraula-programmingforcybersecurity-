/* Print monthly expenditure
Practical 2, Part 2 (a)
@author your name */
#include<stdio.h>
int main() {
//define variables and assign values to them
float foodExpenses = 3000.0; //variable for food expenses 
float leisureExpenses = 1500.0; 
//assign100.0 to leisureExpenses 
float clothesExpenses = 2500.0;
float totalSpent; //variable for total expenses
totalSpent = foodExpenses + leisureExpenses + clothesExpenses;
printf("The total expenditure this month was £%.2f\n\n", totalSpent);
return 0;
}