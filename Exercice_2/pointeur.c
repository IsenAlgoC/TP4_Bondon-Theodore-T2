#include "Header.h"

int main() {
	int tab1[TAILLETAB1];
	for (int i = 1; i <= TAILLETAB1;i++) {
		tab1[i-1] = i;
	}
	for (int i = 0; i < TAILLETAB1; i++) {
		printf_s("%d %c ", tab1[i], SEPARATEUR);
	}
	printf_s("\n");
	int* Ptr1=&tab1[TAILLETAB1-1];
	
	for (int i = 0; i < TAILLETAB1; i++) {
		printf_s("%d %c ", *Ptr1, SEPARATEUR);
		Ptr1--;
	}
}