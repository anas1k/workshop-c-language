#include <stdio.h>
int main(){
	char c;
	printf("Saisir votre charactere : ");
	scanf("%c",&c);
	
	switch(c){
		case 'a':
			printf("Votre charactere '%c' est une voyelle.",c);
			break;
		case 'e':
			printf("Votre charactere '%c' est une voyelle.",c);
			break;	
		case 'i':
			printf("Votre charactere '%c' est une voyelle.",c);
			break;
		case 'o':
			printf("Votre charactere '%c' est une voyelle.",c);
			break;
		case 'u':
			printf("Votre charactere '%c' est une voyelle.",c);
			break;
		case 'y':
			printf("Votre charactere '%c' est une voyelle.",c);
			break;
		default:
			printf("Votre charactere '%c' est une consonnes.",c);
	}
	return 0;
}
