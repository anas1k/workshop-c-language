#include <stdio.h>
int main(){
	int a;
	printf("Saisir votre nombre : ");
	scanf("%d",&a);
	if( a%1 ==0 && a%a== 0 ){
		printf("Le nombre saisie '%d' est un nombre premier .",a);
	}else{
		printf("Le nombre saisie '%d' n'est pas un nombre premier .",a);
	}
	return 0;
}

