#include <stdio.h>

int main() { 

double deposit, interest;
printf("Deposited amount : ");
scanf("%lf", &deposit);
if (deposit < 0) printf("Type in a positive deposited amount of money\n");
else if (deposit < 5000) { interest = deposit * 0.04;
	printf("Interest earned : $%1.2lf\n", interest);
}
else if (deposit < 10000){ interest = deposit * 0.05;
	printf("Interest earned : $%1.2lf\n", interest);
}
else if (deposit < 20000) {interest = deposit * 0.06;
	printf("Interest earned : $%1.2lf\n", interest);
}
else if (deposit > 20000) {interest = deposit * 0.07;
	printf("Interest earned : $%1.2lf\n", interest);
}
else printf("Error\n");






}
