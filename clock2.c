/*Requests two times given in 24-hour clock format and find the time (in hours and minutes)
that has elapsed between the first time and the second time.*/
#include <stdio.h>

int main() { 

int h1, m1, h2, m2, totMin, elapsedHours, elapsedMin;

printf("Type in the first time in to the 24-hour clock format : ");
scanf("%d %d", &h1, &m1);
printf("Type in the second time in to the 24-hour clock format : ");
scanf("%d %d", &h2, &m2);

totMin = (60 - m1) + m2;

if (totMin >= 60) { 

	elapsedHours = h2 - h1;
	elapsedMin   = 60 % totMin;
		if (elapsedHours == 1 && elapsedMin == 1) printf("%d hour %d minute", elapsedHours, elapesedMin);
		else if (elapsedHours == 1) printf("%d hour %d minutes", elapsedHours, elapsedMin);
		else if (elapsedMin == 1 ) printf("%d hours %d minute", elapsedHours, elapesedMin);
		else printf("%d hours %d minutes", elapsedHours, elapesedMin);
}
else {
	elapsedMin   = totMin;
	if (elapsedMin == 1) printf("%d minute", elapsedMin);
	else printf("%d mintues, elapsedMin);

} 



}
