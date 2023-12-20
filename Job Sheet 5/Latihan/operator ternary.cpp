/*
Created by : Muhammad Jimmy Al Afif
NIM : 23343046
Sesi: 202313430008
*/
#include <stdio.h>

int main(){
	
	int jawaban;
	
	printf("Berapakah hasil 3+4?\n");
	printf("jawab> ");
	scanf("%d", &jawaban);
	
	printf("Jawaban anda: %s\n", (jawaban == 7)? "Benar" : "Salah");

	return 0 ;
}
