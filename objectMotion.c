#include <stdio.h>

int main() {

double U; /* initial speed in m/s  */
double T; /* time */
double H; /* height after T seconds */

printf("What's the initial speed in meter/s ? ");
scanf("%lf", &U);
printf("Type in the time - in seconds - after which you'd like to know where the object's height ? ");
scanf("%lf", &T);
H = (U * T) - (4.9 * T * T);
printf("After %1.2f seconds the object will be at %1.2f meters high\n", T , H);

}
