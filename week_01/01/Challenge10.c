#include <stdio.h>
#include <math.h>

int main() {
	// varible declaration
	float r, res;
	const double pi= 3.1415;
	
	printf("Saisir le rayon de cercle : ");
	scanf("%f", &r);
	
	res = 2*pi*r;
	
	printf("La circonférence de cercle est : %f", res);
	
	return 0;
}
