#include <stdio.h>

int main() {
	// varible declarations
	float a,b,c,d,s ;
	//Input values
	printf("Saisir la valeur de A : ");
	scanf("%f", &a);
	
	printf("Saisir la valeur de B : ");
	scanf("%f", &b);
	
	printf("Saisir la valeur de C : ");
	scanf("%f", &c);
	
	printf("Saisir la valeur de D : ");
	scanf("%f", &d);
	//Variable de somme
	s = a+b+c+d ;
	
	printf("La somme des valeurs saisie : %.2f \nLa moyenne : %.2f ", s, s/4 );
	
	return 0;
}
