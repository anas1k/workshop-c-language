#include<stdio.h>
#include<time.h>

int main () 
{
   srand(time(NULL)); 
   int r = rand() % 6; 
   
   switch(r) {
   		case 0 :
		   printf("Lundi");
		   break;
		case 1 :
			printf("Mardi");
			break;
		case 2 :
			printf("Mercredi");
			break;
		case 3 :
			printf("Jeudi");
			break;
		case 4 :
			printf("Vendredi");
			break;
		case 5 :
			printf("Samedi");
	    	break;
		case 6 :
			printf("Dimanche");
			break;
   }
return 0;	
}
