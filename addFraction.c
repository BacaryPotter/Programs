// Takes two pairs of integers and compute their fraction.
#include <stdio.h>

int main() { 

int num1, denom1, num2, denom2, numRes, denomRes;

printf("Type in the first fraction, namely, the numerator followed by a space then the demoninator : ");
scanf("%d %d", &num1, &denom1);
printf("Type in the  second fraction, namely, the numerator followed by a space then the demoninator : ");
scanf("%d %d", &num2, &denom2);
denomRes = denom1 * denom2;
numRes = (((denomRes) / denom1) * num1) + (((denomRes) / denom2) * num2);

printf("%d %d/%d\n", numRes/denomRes, numRes % denomRes, denomRes);

}
