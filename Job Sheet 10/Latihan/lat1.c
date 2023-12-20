/*
	Created by: 
	Nama : Muhammad Jimmy Al Afif
	NIM  : 233430046
*/
#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main(){
	enum hari sekarang;
	sekarang = RABU;
	printf("sekarang hari ke-%d", sekarang+1);
}
