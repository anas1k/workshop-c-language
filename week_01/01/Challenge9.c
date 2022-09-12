#include <stdio.h>
#include <math.h>

int main() {
	// varible declaration
	double x1, y1 , x2 ,y2 ;
	double res, py , px;
	
	// input info 
	printf("Saisir les info de point M \n");
	printf("Saisir x1 : ");
	scanf("%lf", &x1);
	printf("Saisir y1 : ");
	scanf("%lf", &y1);
	printf("Saisir les info de point N \n");
	printf("Saisir x2 : ");
	scanf("%lf", &x2);
	printf("Saisir y2 : ");
	scanf("%lf", &y2);
	
	//la Formule
	
	px = pow((x2-x1),2);
	py = pow((y2-y1),2);
	
	res = sqrt(px+py);
	
	printf("La distance entre M et N est : %.2lf",res);
	
	return 0;
	
}
