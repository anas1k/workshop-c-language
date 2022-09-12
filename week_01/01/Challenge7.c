#include <stdio.h>

int main() {
	// varible declarations
	int a,b;
	// Saisie de valeur 
	printf("Saisir la valeur de A : ");
	scanf("%d", &a);
	
	printf("Saisir la valeur de B : ");
	scanf("%d", &b);	
	
	printf(" Adition : %d \n Substraction : %d \n Multiplicity : %d \n Division : %d \n Rest : %d \n", a+b, a-b, a*b, a/b, a%b);
	
	return 0;	
}
