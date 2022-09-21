#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPremier(int a);
int main(){
	int a;
	printf("Saisir votre nombre : ");
	scanf("%d",&a);
	isPremier(a);
	return 0;
}
bool isPremier(int a){
    int i,r;
         r=0;
         for (i=1 ; i<=a ; i++)
         {
             if ((a%i)==0) 
                r++;
         }
         if(r==2)
         {
            return printf("premier");
         }else {
		 	return printf("pas premier"); 
		 }
}

