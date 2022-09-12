#include<stdio.h>
int main(){
	char a;
	printf("Saisie votre charactere : ");
	scanf("%c",&a);
	if(a>65 && a<90){
		printf("Le charactere saisie est majuscule.");
	}else{
		printf("Le charactere saisie est miniscule");
	}
	return 0;
}
