#include <stdio.h>

int main() {
    // Deklarasi variabel
    double totalPembelian, diskon, cashback, totalPembayaran;

    // Input total pembelian dari pengguna
    printf("Masukkan total pembelian (Rp): ");
    scanf("%lf", &totalPembelian);

    // Perhitungan diskon dan cashback
    if (totalPembelian <= 75000) {
        diskon = 0.05 * totalPembelian;
        cashback = 0;
    } else if (totalPembelian > 75000 && totalPembelian <= 125000) {
        diskon = 0.15 * totalPembelian;
        cashback = 0;
    } else {
        diskon = 0.25 * totalPembelian;
        cashback = 5000;
    }

    // Perhitungan total pembayaran setelah diskon dan cashback
    totalPembayaran = totalPembelian - diskon + cashback;

    // Menampilkan hasil
    printf("\n--- Struk Pembayaran ---\n");
    printf("Total Pembelian: Rp %.2lf\n", totalPembelian);
    printf("Diskon       : Rp %.2lf\n", diskon);
    printf("Cashback     : Rp %.2lf\n", cashback);
    printf("Total Pembayaran: Rp %.2lf\n", totalPembayaran);

    return 0;
}
