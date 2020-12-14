#include <time.h>
#include <stdlib.h>
#include <stdio.h>



int main(){
	srand(time(NULL));
	int occurrence = 0, n=0;
	int cible;
	int tab[100], indice[100];
	for (int i = 0; i < 100; i++) {
		tab[i]=rand()%21;
	}



	for (int i = 0; i < 100; i++) {		  
		indice[i] = -1;					  
	}												   
	printf("Entrer le nombre rechercher : ");		   
	scanf_s("%d", &cible);							   
	int *Ptr = &tab[0];								   
													   
	for (int i = 0; i < 100; i++) {					   
		if (*Ptr == cible) {						   
			indice[n] = i;							   
			occurrence++;							   
			n++;									   
		}   
		Ptr++;
	}
	
	if (occurrence == 0) {
		printf("\nla valeur %d n'a pas ete trouvee", cible);
	}
	else {
		printf("\nla valeur %d a ete trouvee en %d", cible, indice[0]);
		int i = 1;
		while (indice[i] != -1) {
			printf(",puis en %d", indice[i]);
			i++;
		}
		printf(".");
	}
	
}