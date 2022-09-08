#include <stdio.h>
#include <math.h>

int main() {
	// varible declaration
	double largeur , langueur, res;
	// la saisie des info 
	printf("Saisir longueur de rectangle : ");
	scanf("%lf", longueur);
	printf("Saisir largeur de rectangle : ");
	scanf("%lf", largeur);
	
	res= 2*(longueur + largeur);
	// le resultat
	printf("la circonférence de rectangle est : %.2lf", res);
	
	return 0;
}
	
