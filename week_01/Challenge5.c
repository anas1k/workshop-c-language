#include <stdio.h>

int main() {
	// varible declarations
	float f,c;
	// Saisie de valeur 
	printf("Saisir la temperature en Fahrenheit : ");
	scanf("%f", &f);
	// Formule
	c = (f-32)/1.8;
	// pour verifier la formule
	printf("la temp en C : %.2f \n", c);
	// condition
	if(c <= 0){
		printf("La temperature est tres froid");
	}else if(c <= 20){
		printf("La temperature est froid");
	}else if(c <= 30){
		printf("La temperature est chaud");
	}else{
		printf("La temperature est tres chaud");
	}
	
	return 0;	
}
