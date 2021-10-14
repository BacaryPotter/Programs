#include <stdio.h>
#define InspectionAlone 75
#define MinCharge 120
int main() {
	FILE * in = fopen("garagesheet.txt", "r");
	double hoursWorked, partscost, invoice, total;
	int n = 0;
	fscanf(in, "%lf", &hoursWorked);
	
	while(hoursWorked != -2) {
		n++;
		fscanf(in, "%lf", &partscost);
		if (hoursWorked == 0 && partscost == 0) {
			invoice = InspectionAlone;
			total += invoice;
		printf("Charge of the job %d : $%2.2lf\n",n, invoice);
		}
		else if ((hoursWorked * 75) + partscost < 120) { 
			invoice = MinCharge;	
			total += invoice;
			printf("Charge of the job %d : $%2.2lf\n",n, invoice);
		}
		else {
			invoice = (hoursWorked * 75)+ partscost;
			total += invoice;
			printf("Charge of the job %d : $%2.2lf\n",n, invoice);
			fscanf(in, "%lf", &hoursWorked);
		}
	}
	printf("\nTOTAL OF ALL JOBS : $%2.2lf\n", total);


}
