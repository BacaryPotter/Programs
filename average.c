//request 3 integers; print their average
#include <stdio.h>

int main() {
	int a,b,c;
	printf("Enter 3 integers : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("\nTheir average is %3.1f\n", (a + b + c) / 3.0);	

}
