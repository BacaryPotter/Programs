//calculate the electricity charges for a customer.
#include <stdio.h>

int main() { 

char name[50];
double prevMeterR, currntMeterR, fixedChrg, ratePerUnit;
printf("Name : ");
gets(name);
printf("Previous Meter Read : ");
scanf("%lf", &prevMeterR);
printf("Current Meter Read : ");
scanf("%lf", &currntMeterR);
printf("How much is the fixed charge : ");
scanf("%lf", &fixedChrg);
printf("How much is the rate per hour : ");
scanf("%lf", &ratePerUnit);

printf("--------------------\n");

printf("Number of unit used : %1.3f\n", currntMeterR - prevMeterR);
printf("Amount to pay : $%1.2f\n", fixedChrg + (ratePerUnit * (currntMeterR - prevMeterR)));


}
