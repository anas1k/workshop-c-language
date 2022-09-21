#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


//Section Structure
typedef struct Race{
	int numberOfLaps ; 
	int currentLap;
	char firstPlaceDriverName[25];
	char firstPlaceRaceCarColor[25];
}Race;

typedef struct RaceCar{
	char driverName[30];
	char raceCarColor[30];
	int totalLapTime;
}raceCar;


//Print Function Section
void printIntro(){
	printf("\nBienvenue a notre evenement principal, les fans de course numerique !\nJ'espere que tout le monde a pris son gouter car nous allons commencer !\n");
}

void printCountDown(){
	int i=0;
	printf("\nCoureurs prets ! Dans...\n");
	for(i=5;i>=0;i--){
		sleep(1);
		printf("%d\n",i);
	}sleep(1);
	printf("Course !\n");
}


// Function D'impretion :

void printFirstPlaceAfterLap(Race race){
	printf("\n Apres le tour numbero %d\n",race.currentLap);
	printf("La premiere place est occupee par : %s dans la voiture de course %s\n",race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
}

void printfCongratulation(Race race){
	printf("\nFelicitons tous %s, dans la voiture de course %s, pour son incroyable performance.\nC'etait vraiment une belle course et bonne nuit a tous !\n",race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
}


// Section des Fonctions Logiques :

int calculateTimeToCompleteLap(){
	int vitesse, acceleration,nerves ; 
	srand(time(0));
	vitesse =(rand()%3 )+1;
	acceleration =(rand()%3 )+1;
	nerves =(rand()%3 )+1;
	return (vitesse+ acceleration +nerves);
}

void updateRaceCar(raceCar* raceCar){
	raceCar->totalLapTime +=calculateTimeToCompleteLap;
}

void updateFirstPlace(Race* race,raceCar* raceCar1,)

//main 
int main(){
	printIntro();
	printCountDown();
	
	
	return 0;
}
