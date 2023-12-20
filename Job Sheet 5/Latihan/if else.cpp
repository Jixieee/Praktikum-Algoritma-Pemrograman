/*
Created by : Muhammad Jimmy Al Afif
NIM : 23343046
Sesi: 202313430008
*/
#include <stdio.h>
#include <string.h>
int  main( ){
	// membuat array karakter untuk menyimpan password
	char password[30];

	printf("==== Program Login ====\n");
	printf("Masukan password: ");
	scanf("%s", &password);

	// percabangan if/este
	if( strcmp(password, "susu") ==0 ){	
	printf("Selamat datang bos!\n");
	} else{
	printf("Password salah, coba lagi!\n");
	}
	printf("Terimakasih sudah menggunakan aplikasi ini!\n");
	
	return 0;
}
