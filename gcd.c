//Finds the Highest Common Denominator
#include <stdio.h>
int main() {
	int m,n;
	printf("Type a fraction by typing the numerator first and the denominator");
	scanf("%d %d", &m, &n); 
	while (n > 0){
	
	int r = m % n;
		m = n;
		n = r;
	}

		printf("%d \n", m);

	}



