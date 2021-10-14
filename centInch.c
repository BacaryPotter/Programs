#include <stdio.h>
int main() {
float length;
printf("Type in a length in centimeter : ");
scanf("%f", &length);
printf("%1.2f cm is equivalent to %1.2f inch\n", length, length / 2.54);
}
