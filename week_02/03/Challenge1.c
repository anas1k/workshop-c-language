#include <stdio.h>
int main(){
	int a;
	printf("Saisir votre nomber : ");
	scanf("%d",&a);
	
	printf("----------------------- \n");
	printf ( "1  - 2  - 3  - 4  - 5  - 6  - 7  - 8  - 9  - 10\n");
	printf("%d - %d - %d - %d - %d - %d - %d - %d - %d - %d\n", 
		a*1, a*2, a*3, a*4, a*5, a*6, a*7, a*8, a*9, a*10);
	printf("-----------------------");
	return 0;
}
