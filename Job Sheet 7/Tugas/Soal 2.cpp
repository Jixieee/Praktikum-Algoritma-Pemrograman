#include <stdio.h>

int main() {
    // Deklarasi variabel
    int jumlahMahasiswa;

    // Input jumlah mahasiswa
    printf("Input banyak mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    // Deklarasi array namaMahasiswa
    char namaMahasiswa[jumlahMahasiswa][50]; // Maksimal 50 karakter per nama

    // Input nama mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf("%s", namaMahasiswa[i]);
    }

    // Menampilkan nama mahasiswa
    printf("\n--- Nama Mahasiswa ---\n");

    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
    }

    return 0;
}
