#include <stdio.h>
int main(){
	int c,d;
	printf("Saisir nombre : ");
	scanf("%d",&c);
	printf("Saisir nombre : ");
	scanf("%d",&d);
	sum(c,d);
	return 0;
}
int sum(int a, int b){
	return printf("%d",a+b);
}
