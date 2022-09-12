#include <stdio.h>
int main(){
	int a,b;
	printf("Saisir le premier nombre : ");
	scanf("%d",&a);
	printf("Saisir le deuxieme nombre : ");
	scanf("%d",&b);
	if(a==b){
		printf("les deux nombre saisie sont identiques : %d",3*(a+b));
	}else{
		printf("la moyenne est : %d",a+b);
	}
	return 0;
}
