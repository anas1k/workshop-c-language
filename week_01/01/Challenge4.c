#include <stdio.h>

int main() {
	// varible declarations
	float mile , metre;
	// Saisie par utilisateur
	printf("Saisir la distance en mile : ");
	scanf("%f", &mile);
	// la formule de convertion 
	metre = mile * 1609.34;
	// Affichage de resultat
	printf("La distance saisie en Metre est : %.2f ", metre);
	
	return 0;
}
