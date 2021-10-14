#include <stdio.h>

int main() {

double grosSal;
double deduct;
double taxRate;

printf("Type in your gross salary : ");
scanf("%lf", &grosSal); 
printf("Type in the amount of deduction : ");
scanf("%lf", &deduct);
printf("Type in your tax rate : ");
scanf("%lf" , &taxRate);


printf("---------------\n");
printf("Gros salary : $%1.2f\n", grosSal);
printf("Tax deducted : $%1.2f\n", deduct);
printf("Net pay : $%1.2f\n", grosSal - ((grosSal * taxRate) - deduct)); /* Calculating net pay */
printf("Gros salary percentage paid in tax : %1.2f%%\n",(((grosSal * taxRate) - deduct) / grosSal ) * 100) ;
}
