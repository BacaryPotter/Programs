//All purchase greater or equal to $300 is eligible to a 15% discount
#include<stdio.h>
#define DiscountRate 0.85 // 1 - (15% / 100) 
int main() {

double purch1, purch2, purch3, totalPurch; // var declaration
printf("type in the price of the first item : ");
scanf("%lf", &purch1);
printf("Type in the price of the second item : ");
scanf("%lf", &purch2);
printf("Type in the price of the third item : ");
scanf("%lf", &purch3);

totalPurch = purch1 + purch2 + purch3;
if (totalPurch >= 300) totalPurch = totalPurch * DiscountRate;

printf("You have to pay $%1.2f\n" , totalPurch);
}
