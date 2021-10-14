/*Requests two times given in 24-hour clock format and find the time (in hours and minutes)
that has elapsed between the first time and the second time.*/
#include <stdio.h>

int main() { 

int h1, m1, h2, m2, totMin, eHours, eMin;

printf("Type in the first time in to the 24-hour clock format : ");
scanf("%d %d", &h1, &m1);
printf("Type in the second time in to the 24-hour clock format : ");
scanf("%d %d", &h2, &m2);

totMin = m1 + m2;


	//eHours = h2 - h1;
	//eMin   = totMin;
if (h2 < h1 && totMin < 60 && h1 > 12) {
	eHours = ((24 - h1) - 1) + h2;
	eMin   = m1 + m2;
	printf("%d hours %d minutes\n", eHours, eMin);
}
else if (h2 < h1 && totMin < 60 && m1 > m2) {
	eHours = ((12 - h1)- 1) + h2;
	eMin   = (m1 + m2) % 60;
	printf("%d hours %d minutes\n", eHours, eMin);
}

else if (totMin < 60 && m2 > m1) {
	eHours = h2 - h1;
	eMin = m2 - m1;
	if (eHours < 0) printf("ERROR\n");
	else printf("%d hours %d minutes\n", eHours, eMin);

}
else if (totMin < 60 && m1 > m2 && h2 > h1) {
	eHours = (h2 - h1) - 1;
	eMin = (60 - m1) + m2;
	if (eHours < 0) printf("ERROR\n");
	else printf("%d hours %d minutes\n",eHours, eMin);
}
else if (totMin >= 60 && m1 > m2) {
	eHours = (h2 - h1) - 1;
	eMin = (60 % m1) + m2;
	if (eHours < 0) printf("ERROR\n");
	else printf("%d hours %d minutes\n", eHours, eMin);

}
else if (totMin >= 60 && m2 > m1) {
	eHours = (h2 - h1) + 1;
	eMin = (m1 + m2) % 60;
	if (eHours < 0) printf("ERROR\n");
	else printf("%d hours %d minutes\n", eHours, eMin);

}
else if (m1 == m2) {
	eHours = h2 - h1;
	if (eHours < 0) printf("ERROR\n");
	else if (eHours == 0 || eHours == 1) printf("%d hour 0 minute\n", eHours);
	else printf("%d hours 0 minutes\n", eHours);

}
else if (h1 == h2 && m1 == m2) printf("No time has elapsed between those two times\n");

else printf("ERROR\n");
}
 

