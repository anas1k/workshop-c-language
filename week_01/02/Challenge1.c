#include <stdio.h>

int main(){
	int a;
	printf("Saisir votre nombre : ");
	scanf("%d", &a);
	
	if((a%2)==0){
		printf("Le nobmre saisie est un nombre paire ");
	}else{
		printf("Le nombre saisie est impaire");
	}
	return 0;
}
