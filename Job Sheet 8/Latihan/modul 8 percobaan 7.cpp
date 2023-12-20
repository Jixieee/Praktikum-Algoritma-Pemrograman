/*
Created by : Muhammad Jimmy Al Afif
NIM : 23343046
Sesi: 202313430008
*/

#include <stdio.h>

void kali_dua(int *num){
	*num = *num * 2;
}

int main(){
	int angka = 9;
	
	kali_dua(&angka);
	
	printf("isi variabel angka = %d\n", angka);
}
