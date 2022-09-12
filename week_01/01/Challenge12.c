#include <stdio.h>

int main() {
	// varible declaration
	int a, b, c;
	printf("Saisir les trois numbres \n");
	printf("Saisir le 1er numbre : ");
	scanf("%d", &a);
	printf("Saisir le 2eme numbre : ");
	scanf("%d", &b);
	printf("Saisir le 3eme numbre : ");
	scanf("%d", &c);
	
	printf("les trois saisie sont : %d %d %d, l'inverse : %d %d %d",a,b,c, c, b, a);	
	return 0;
}
