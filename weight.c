//Asks for two weights in kg and g and prints the sum the weights.
#include <stdio.h>

int main() {
int weight1, gram1, weight2, gram2, sumWeight, sumGram;
printf("Type in the weight as follow by separating the kg part and the gram part with a space\n");
printf("Type in the first weight : ");
scanf("%d %d", &weight1, &gram1);
printf("Type in the second weight : ");
scanf("%d %d", &weight2, &gram2);

sumWeight = weight1 + weight2;
sumGram = gram1 + gram2;
if (sumGram >= 1000) { sumWeight =  
	sumWeight + 1;
	sumGram = sumGram % 1000; 
}
printf("%dkg %dg\n", sumWeight, sumGram);
}
