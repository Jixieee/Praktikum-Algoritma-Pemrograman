#include <stdio.h>
#include <math.h>

// Fungsi untuk menghitung luas lingkaran
double luas(double r) {
    return M_PI * r * r;
}

// Fungsi untuk menghitung keliling lingkaran
double keliling(double r) {
    return 2 * M_PI * r;
}

int main() {
    // Deklarasi variabel
    double r;

    // Input radius dari pengguna
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%lf", &r);

    // Memanggil fungsi untuk menghitung luas dan keliling
    double hasilLuas = luas(r);
    double hasilKeliling = keliling(r);

    // Menampilkan hasil
    printf("Luas lingkaran: %.2lf\n", hasilLuas);
    printf("Keliling lingkaran: %.2lf\n", hasilKeliling);

    return 0;
}
