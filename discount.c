#include <stdio.h>

int main() { 

double price, discPerc;
printf("Type in a price and a discount percent separated by a space : ");
scanf("%lf %lf", &price, &discPerc);
printf("Original price : $%1.2f \nThe discount amount : $%1.2f \nAmount after discount $%1.2f\n", price, price * discPerc, price * (1 - discPerc) );


}
