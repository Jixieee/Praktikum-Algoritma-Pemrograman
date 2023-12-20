#include <stdio.h>

int main() {
	int saldo = 175000; //Saldo Awal
	int pilihan, jumlah;
	
	printf("No Rek : 0123\n");
	printf("Nama Akun : Hattori\n");
	printf("Saldo ATM : Rp. %d\n", saldo);
	
	do {
		printf("\nATM\n");
		printf("1. Cek Saldo\n");
		printf("2. Setoran\n");
		printf("3. Penarikan Tunai\n");
		printf("4. Exit\n");
		printf("Pilihan : ");
		scanf("%d", &pilihan);
		
		switch (pilihan) {
			case 1:
				printf("Saldo Anda saat ini: Rp. %d\n", saldo);
				break;
			case 2:
				printf("Jumlah yang akan disetor: Rp. ");
				scanf("%d", &jumlah);
				saldo += jumlah;
				printf("Saldo Anda saat ini: Rp. %d\n", saldo);
				break;
			case 3:
				printf("Jumlah yang akan ditarik: Rp. ");
				scanf("%d", &jumlah);
				if (saldo - jumlah < 50000) {
					printf("Maaf, saldo minimal yang harus disisakan adalah Rp. 50.000\n");
				} else {
					saldo -= jumlah;
					printf("Saldo Anda saat ini: %d\n", saldo);
				}
				break;
			case 4:
				printf("Terima kasih telah menggunakan ATM kami.\n");
				break;
			default:
				printf("Pilihan tidak valid.\n");
				break;
		}
	} while (pilihan != 4);
	return 0;
}
