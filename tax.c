// Prints the name, gross pay, tax deducted and gross pay.
#include <stdio.h>
int main() {
char name[40]; 
double hoursWorked, hourlyRate, taxRate, grossPay, deductedTax, netPay;
int supHours;
printf("Name : ");
gets(name);
printf("Hours worked : ");
scanf("%lf", &hoursWorked);
printf("HourlyRate : ");
scanf("%lf", &hourlyRate);
printf("Tax Rate : ");
scanf("%lf", &taxRate);
taxRate = (taxRate / 100); 		// we'll multiply by the decrease rate i-e 0.X
supHours = (int)hoursWorked % 40;	// casting a double varibale into an integer
if (hoursWorked > 40) {			// calculating gross pay depending on cases.
	grossPay = (40 * hourlyRate) + ((supHours) * hourlyRate * 1.5);

}
	else grossPay = 40 * hourlyRate; 

deductedTax = grossPay * 0.8 * taxRate;
netPay = grossPay - deductedTax;

printf("#################################\n");

printf("Name : %s\n", name);
printf("Gross Pay : $%1.2f\n", grossPay);
printf("Tax deducted : $%1.2f\n", deductedTax);
printf("Net Pay : $%1.2f\n", netPay);
}
