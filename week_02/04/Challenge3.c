#include <stdio.h>
#include <stdbool.h>
int main(){
	int a;
	printf("Saisir votre nombre : ");
	scanf("%d",&a);
	isPremier(a);
	return 0;
}
bool isPremier(int a){
	if( a%1==0 && a%a==0 ){
		return true;
	}else{
		return false;
	}
}

