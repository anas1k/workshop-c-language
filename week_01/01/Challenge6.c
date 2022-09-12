#include <stdio.h>

int main() {
	// varible declarations
	float f,c;
	// Saisie de valeur 
	printf("Saisir la temperature en Fahrenheit : ");
	scanf("%f", &f);
	// Formule
	c = (f-32)/1.8;
	// resultat
	printf("La temperature en Celsius : %.2f", c);
	
	
	return 0;	
}
