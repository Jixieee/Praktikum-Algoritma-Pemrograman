#include <stdio.h>

int main() {
	int i;
	//Deret Bilangan Genap
	printf("Deret Bilangan Genap : ");
	for (i = 0; i <= 50; i += 2) {
		printf("%d ", i);
	}
	//Deret Bilangan Ganjil
	printf("\nDeret Bilangan Ganjil : ");
	for (i = 1; i <= 50; i += 2) {
		printf("%d ", i);
	}
	
	return 0;
}
