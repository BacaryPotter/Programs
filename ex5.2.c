#include <stdio.h>
#include <string.h>
int main() {
	FILE * in = fopen("itemlist.txt", "r");
	char item[10];
	double price, discount, invoice;
	printf("ITEM	PRICE	DISCOUNT	TOTAL\n");
	fscanf(in, "%s", item);
	while(strcmp(item, "END") != 0) {
		fscanf(in, "%lf %lf", &price, &discount);
		invoice = price * (1 - (discount/100));
		printf("%s	$%2.2f	%2.0f%%		$%5.2lf\n", item, price, discount, invoice);
		
		fscanf(in, "%s", item);
	}
	fclose(in);
}
