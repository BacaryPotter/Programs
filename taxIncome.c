#include <stdio.h>

int main() {
double income, tax, txbleInc, avgTaxRate;
printf("Income : ");
scanf("%lf", &income);
txbleInc = 0.8 * income;
if (txbleInc <= 15000) tax = 0.1 * txbleInc;
else if (txbleInc > 15000 && txbleInc <= 35000) tax = (0.1 * 15000) + ((txbleInc - 15000) * 0.2);
else tax = (0.1 * 15000) + (0.2 * 35000) + ((txbleInc - 35000) * 0.25);
printf("TAXABLE INCOME : $%1.2lf\n", txbleInc);
printf("TAX : $%1.2lf\n", tax);
printf("AVG TAX RATE : %1.1lf%%\n", (tax / income) * 100);




}
