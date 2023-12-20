/*
Created by : Muhammad Jimmy Al Afif
NIM : 23343046
Sesi: 202313430008
*/
#include <stdio.h>
	
int main(){
	//membuat array 
	int nilai[5] = {33, 22, 11, 44, 21};
	
	//mengambil banyaknya isi array 
	int length = sizeof(nilai) / sizeof(*nilai);
	
	printf("Banyaknya isi array nilai: %d\n", length);
}
