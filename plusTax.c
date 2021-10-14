// asks user to type in a price and a tax percentage and then adds that percent tax
// to the price. 
#include <stdio.h>

int main() { 

double price, tax_Perctg;

printf("Type in a price and a percentage tax separated by a whitespace : ");

scanf("%lf %lf", &price, &tax_Perctg);

printf("Original price : %1.2f | Tax amount : %1.2f | Amount to pay : %1.2f\n", price, tax_Perctg * price, (1 + tax_Perctg) * price); 

}

