#include <stdio.h>

int main() {
    // Deklarasi variabel
    int jumlahMahasiswa = 20;
    float nilaiMahasiswa[jumlahMahasiswa];
    float totalNilai = 0, rataRata;

    // Input nilai mahasiswa
    printf("Masukkan nilai dari 20 mahasiswa:\n");
    
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Nilai mahasiswa %d: ", i + 1);
        scanf("%f", &nilaiMahasiswa[i]);

        // Menambahkan nilai ke totalNilai
        totalNilai += nilaiMahasiswa[i];
    }

    // Menghitung rata-rata
    rataRata = totalNilai / jumlahMahasiswa;

    // Menampilkan hasil
    printf("\n--- Hasil ---\n");
    printf("Nilai Mahasiswa: ");
    
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("%.2f ", nilaiMahasiswa[i]);
    }

    printf("\nRata-rata Nilai: %.2f\n", rataRata);

    return 0;
}
