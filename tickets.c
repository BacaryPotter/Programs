#include <stdio.h>

int main() { 

	double resPrice, resSold, standsPrice, standSold, groundPrice, groundSold, totalResSales, totalStandSales, totalGroundSales;
	printf("Reserved price and tickets sold? ");
	scanf("%lf %lf", &resPrice , &resSold);
	printf("Stands price and tickets sold? ");
	scanf("%lf %lf", &standsPrice , &standSold);
	printf("Grounds price and tickets sold? ");
	scanf("%lf %lf", &groundPrice , &groundSold);
	int totalTickets = resSold + standSold + groundSold;
	printf("Reserved sales: $%3.2f \n", resPrice * resSold);
	printf("Stands sales: $%3.2f \n", standsPrice * standSold);
	printf("Grounds sales: $%3.2f \n", groundPrice * groundSold);
	printf("%d tickets were sold\n", totalTickets);
	printf("Total money collected: $%3.2f\n", (resPrice * resSold) + (standsPrice * standSold) + (groundPrice * groundSold));
}
