#include <stdio.h>
#define MinCharge 75
#define ChargePerHour 75
#define MinChargeLabour 120
int main() {
double hours, partCost, invoice;

printf("Hours worked : ");
scanf("%lf", &hours);
if (hours == 0 ) invoice = MinCharge;
else {
printf("Cost of parts : ");
scanf("%lf", &partCost);
 invoice = partCost + MinChargeLabour + (hours * ChargePerHour);}
 
printf("Charge for the job : $%1.2f\n", invoice);
}
