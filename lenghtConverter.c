#include <stdio.h>

int main() {
double number;
int yard, foot, inches;

printf("Type in a length in inches to be converted into yards, feet and inches ");
scanf("%lf", &number);

yard =  number / 36;
foot = (number - (yard * 36)) / 12;
inches = number - ((yard * 36) + (foot * 12));

printf("%d yd %d ft %d in \n", yard, foot, inches);

}
