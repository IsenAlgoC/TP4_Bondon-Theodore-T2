#include "header.h"

int main() {
	HEURE HeureDebut = { 12,45 }, HeureFin = { 0,0 }, Duree = { 0, 45};
	int retenueMinute,retenueHeure=0;
	if (HeureDebut.minute + Duree.minute > 60) {
		retenueHeure = 1;
		retenueMinute = (HeureDebut.minute + Duree.minute) % 60;
		HeureFin.minute = retenueMinute;
	}
	else {
		HeureFin.minute = HeureDebut.minute + Duree.minute;
	}
	HeureFin.heure = HeureDebut.heure + Duree.heure+retenueHeure;
	printf("HeureFin vaut %d:%d", HeureFin.heure, HeureFin.minute);
	
	
	

}