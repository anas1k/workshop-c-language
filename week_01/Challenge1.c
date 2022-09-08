#include <stdio.h>

int main() {
	// varible declarations
	char name[20], lastName[20], age[2], sex[5], numTel[10] ;
	
	printf("------------------------------------ \n");
	// input msgs for user
	printf("Saisir votre Prenom : ");
	gets(name); // gets string input from user
	
	printf("Saisir votre nom : ");
	gets(lastName);
	
	printf("Saisir votre age :");
	gets(age);
	
	printf("Saisir votre sexe :");
	gets(sex);
	
	printf("Saisir votre numero de telephone :");
	gets(numTel);
	// Output msg of info 
	printf("------------------------------------ \n");
	printf("Vos information sont : \n");
	
	printf("Votre nom : ");
	puts(name);
	
	printf("Votre prenom : ");
	puts(lastName);
	
	printf("Votre age : ");
	puts(age);
	
	printf("Votre sexe : ");
	puts(sex);
	
	printf("Votre numero de tel : ");
	puts(numTel);
	// Msg to exit terminal
	printf(" \n");
	printf("Pour la confirmation des informations cliquer sur entree.");
	
return 0;
}
