#include <stdio.h>
int main() {
	double acc_Number;
	char name[50];
	float average_Balance;
	int num_Of_Transac;
	float service_charge;
	printf("Name? ");
	gets(name);
	printf("Account number? ");
	scanf("%lf", &acc_Number);
	printf("average balance? ");
	scanf("%f", &average_Balance);
	printf("Number of transactions? ");
	scanf("%d", &num_Of_Transac);
	service_charge = 0.5 * num_Of_Transac;
	float interest = 0.06 * average_Balance ;
// printing on the screen 	
	printf("Name: %s\n", name);
	printf("Average balance: $%7.2f\n", average_Balance);
	printf("Interest: $%6.2f\n", interest);
	printf("Service charge: $%4.2f", service_charge); 
	

}
