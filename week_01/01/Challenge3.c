#include <stdio.h>

int main() {
	// Varible declarations
	float mile , metre;
	// Saisie par utilisateur
	metre = 0;
	printf("Saisir la distance en metre : ");
	scanf("%f", &metre);
	// la formule de convertion 
	
	mile = (metre* 1.60934)/1000;
	// Affichage de resultat
	printf("La distance saisie en Mile est : %.3f ", mile);
	
	return 0;
}
