#650include <stdio.h>

// Fungsi untuk menghitung besarnya diskon
double potong(double totalPembelian) {
    double diskon;

    if (totalPembelian < 1000000) {
        diskon = 0;
    } else if (totalPembelian >= 1000000 && totalPembelian < 3000000) {
        diskon = 0.2 * totalPembelian;
    } else {
        diskon = 0.35 * totalPembelian;
    }

    return diskon;
}

int main() {
    // Deklarasi variabel
    double totalPembelian, diskon, totalBayar;

    // Input total pembelian dari pengguna
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.): ");
    scanf("%lf", &totalPembelian);

    // Memanggil fungsi untuk menghitung diskon
    diskon = potong(totalPembelian);

    // Menghitung total yang harus dibayarkan setelah diskon
    totalBayar = totalPembelian - diskon;

    // Menampilkan hasil
    printf("Besar Diskon            : Rp %.2lf\n", diskon);
    printf("Besar Yang Harus Dibayarkan : Rp %.2lf\n", totalBayar);

    return 0;
}
