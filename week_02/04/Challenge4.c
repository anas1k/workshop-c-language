#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool diviBy(int n , int a){
	int c = n/a;
    int i,r;
         r=0;
         for (i=1 ; i<=c ; i++)
         {
             if ((c%i)==0) 
                r++;
         }
         if(r==2)
         {
            return printf("premier");
         }else {
		 return printf("pas premier"); }
   
}

int main(){
	int a,n;
	printf("Saisir les deux nombres : ");
	scanf("%d",&a);
	scanf("%d",&n);
	
	diviBy(a,n);
	return 0;
}
