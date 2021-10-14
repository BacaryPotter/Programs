#include <stdio.h>

int main() {

double lengthR, breadthR, costPrSqrMtr;

printf("Type in the length and breadth of the room - in meter and separated by a space : ");
scanf("%lf %lf", &lengthR , &breadthR);
printf("Type in the cost per square meter of the carpet : ");
scanf("%lf", &costPrSqrMtr);
printf("-----------------------\n");
printf("Area of the room = %1.2f meter square \n", lengthR * breadthR);
printf("Cost of carpeting = $%1.2f\n", (lengthR * breadthR) * costPrSqrMtr); 


}
