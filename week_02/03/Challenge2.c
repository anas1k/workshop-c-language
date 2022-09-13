#include <stdio.h>
int main(){
	int li, st=1, lo,i,j;
	printf("Saisir le nombre de ligne de pyramide : ");
	scanf("%d",&li);
	li=(li*2)-1;
	lo = li- 1;
	for(i=0;i<li;i++){
		for(j=0;j<lo;j++){
			printf("  ");
			}
			for(i=0;i<st;i++){
				printf("* ");
			}
		printf("\n");
		st+=2;
		lo--;
	}
	return 0;
}
