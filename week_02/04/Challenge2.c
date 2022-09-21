#include <stdio.h>
int exchange(int a,int b);
int main(){
	int c,d;
	printf("Saisir nombre : ");
	scanf("%d",&c);
	printf("Saisir nombre : ");
	scanf("%d",&d);
	printf("Les nombres saisie : %d, %d, \n echanger les valeurs : ",c,d);
	exchange(c,d);
}
int exchange(int a, int b){
	int c;
	c=a;
	a=b;
	b=c;
	return printf("%d, %d",a,b);
}
