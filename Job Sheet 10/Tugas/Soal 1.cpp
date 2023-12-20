#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nomorKomputer, tebakan, percobaan;
    char pilihan;

    // Inisialisasi seed untuk nomor acak
    srand(time(NULL));

    do {
        // Generate nomor acak antara 1 dan 20
        nomorKomputer = rand() % 20 + 1;
        percobaan = 0;

        printf("Selamat datang di permainan Tebak Nomor!\n");

        do {
            // Meminta pemain menebak nomor
            printf("Masukkan tebakan anda (1-20): ");
            scanf("%d", &tebakan);

            percobaan++;

            // Memberikan petunjuk
            if (tebakan < nomorKomputer) {
                printf("Nomor saya lebih besar!\n");
            } else if (tebakan > nomorKomputer) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, Anda benar!\n");
                printf("Jumlah percobaan: %d\n", percobaan);
            }

        } while (tebakan != nomorKomputer);

        // Menanyakan apakah ingin bermain lagi
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        scanf(" %c", &pilihan);

    } while (pilihan == 'y' || pilihan == 'Y');

    printf("Terima kasih telah bermain! Sampai jumpa lagi.\n");

    return 0;
}
