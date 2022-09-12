#include <stdio.h>
int main(){
	char a;
	printf("Saisie votre charactere : ");
	scanf("%c",&a);
	if(a>=65 && a<=90){
		printf("Le charactere saisie est majuscule.");
	}else if(a>=97 &&a<=122){
		printf("Le charactere saisie est miniscule");
	}else{
		printf("Le charactere saisie n'est pas partie des alphabets");
	}
	
	return 0;
}
