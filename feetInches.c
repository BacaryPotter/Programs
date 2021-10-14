//Requests two length in feet and inches from user and prints the sum of the lengths.
#include <stdio.h>

int main() {
int feet1, inch1 , feet2, inch2, sumFeet, sumInches;
printf("Type in your length by using a space to separate the part that's in feet from the part that's in inches\n");
printf("Type in your first length : ");
scanf("%d %d", &feet1, &inch1);
printf("Type in your second length : "); 
scanf("%d %d", &feet2, &inch2);

sumFeet = feet1 + feet2;
sumInches = inch1 + inch2;
if (sumInches >= 12) {
	sumFeet = sumFeet + 1;
	sumInches = sumInches % 12;	

}
printf("%d ft. %d in.\n", sumFeet, sumInches);
}
