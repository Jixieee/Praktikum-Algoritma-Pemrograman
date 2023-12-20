#include <stdio.h>

// Fungsi untuk penjumlahan
int tambah(int a, int b) {
    return a + b;
}

// Fungsi untuk pengurangan
int kurang(int a, int b) {
    return a - b;
}

// Fungsi untuk perkalian
int kali(int a, int b) {
    return a * b;
}

// Fungsi untuk pembagian
float bagi(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: Pembagian oleh nol.\n");
        return 0;
    }
}

int main() {
    // Deklarasi variabel
    int bilangan1, bilangan2;

    // Input operand
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bilangan1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bilangan2);

    // Memanggil fungsi untuk setiap operasi aritmetik
    printf("Hasil Penjumlahan: %d\n", tambah(bilangan1, bilangan2));
    printf("Hasil Pengurangan: %d\n", kurang(bilangan1, bilangan2));
    printf("Hasil Perkalian  : %d\n", kali(bilangan1, bilangan2));
    printf("Hasil Pembagian  : %.2f\n", bagi(bilangan1, bilangan2));

    return 0;
}
