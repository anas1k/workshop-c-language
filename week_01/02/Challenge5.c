#include <stdio.h>
int main(){
	int annee,Hr,min,sc,anBis,mois = 12;
	printf("Saisir une annee : ");
	scanf("%d",&annee);
	if((annee%4 == 0) && (annee % 100 != 0 ) || ( annee % 400 == 0 )){
		printf("Cette annee est bissextile \n");
		anBis = 366;
		Hr = 24*anBis;
		min = Hr*60;
		sc = min*60;
	}else{
		anBis = 365;
		Hr = 24*anBis;
		min = Hr*60;
		sc = min*60;
	}
	printf("en mois : %d \n",mois);
	printf("en jours : %d \n",anBis);
	printf("en heure : %d \n", Hr);
	printf("en minute : %d \n",min);
	printf("en second : %d \n",sc);
	
return 0;
}
