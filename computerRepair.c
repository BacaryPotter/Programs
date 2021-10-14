/*This program prompt the user to type in amount of works required to fix his item
and the price of the parts he might have bought then calculate his invoice */

#include <stdio.h>
int main() {
double hours;
double costParts;
double invoice;

printf("Type in the amount of labour hours : ");
scanf("%lf", &hours);
printf("How much did the parts cost : ");
scanf("%lf", &costParts);

invoice = hours * 100 + costParts;

if (invoice < 150) invoice = 150; 

printf("\nCharge for the job: $%3.2f\n", invoice);
}
