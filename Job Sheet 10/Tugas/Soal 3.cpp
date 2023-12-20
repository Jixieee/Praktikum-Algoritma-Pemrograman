#include <stdio.h>

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    int npm;
    char nama[50];
    char tgl_lahir[11];
    char alamat[100];
    long hp;
};

int main() {
    struct Mahasiswa mahasiswa[100]; // Deklarasi array dari struktur Mahasiswa
    int jumlahMahasiswa = 0;
    char lagi;

    do {
        // Memasukkan data mahasiswa
        printf("NPM        : ");
        scanf("%d", &mahasiswa[jumlahMahasiswa].npm);

        printf("NAMA       : ");
        getchar(); // Untuk menangani karakter newline (\n) dari input sebelumnya
        fgets(mahasiswa[jumlahMahasiswa].nama, sizeof(mahasiswa[jumlahMahasiswa].nama), stdin);

        printf("TGL LAHIR  : ");
        scanf("%s", mahasiswa[jumlahMahasiswa].tgl_lahir);

        printf("ALAMAT     : ");
        getchar(); // Untuk menangani karakter newline (\n) dari input sebelumnya
        fgets(mahasiswa[jumlahMahasiswa].alamat, sizeof(mahasiswa[jumlahMahasiswa].alamat), stdin);

        printf("HP         : ");
        scanf("%ld", &mahasiswa[jumlahMahasiswa].hp);

        jumlahMahasiswa++;

        // Menanyakan apakah ingin memasukkan data lagi
        printf("\nMau memasukkan data lagi [y/t]? ");
        scanf(" %c", &lagi);

    } while (lagi == 'y' || lagi == 'Y');

    // Menampilkan data mahasiswa
    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("%d %s %s %s %ld\n", mahasiswa[i].npm, mahasiswa[i].nama, mahasiswa[i].tgl_lahir, mahasiswa[i].alamat, mahasiswa[i].hp);
    }

    printf("Terima kasih!\n");

    return 0;
}
