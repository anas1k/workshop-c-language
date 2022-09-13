#include <stdio.h>
int main(){
	int a, b;
	printf("Saisir votre nombre : ");
	scanf("%d",&a);
	while(a!=0){
		b=(b*10)+(a%10);
		a/=10;
	}
	printf("%d",b);
	return 0;
}
