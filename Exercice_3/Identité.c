#include "Header.h"

int main() {
	char nom[20];
	printf("Rentrez votre nom:");
	scanf_s("%s", nom, _countof(nom));
	char prenom[20];
	printf("\nRentrez votre prenom:");
	scanf_s("%s",prenom, _countof(prenom));
	char r;
	printf("\nQuel est votre sexe ? (H/F)");
	r = _getch();
	char sexe[20];
	if (r == 'H' || r=='h') {
		strcpy(sexe,"Monsieur");
	}
	else { 
		strcpy(sexe, "Madame");
	}
	printf("\n%s %s %s", sexe,prenom,nom);
	
	
}