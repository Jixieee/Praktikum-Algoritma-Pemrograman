#include <stdio.h>

int main() {
    int detik, jam, menit, sisa_detik;

    printf("Masukkan jumlah waktu dalam detik: ");
    scanf("%d", &detik);

    jam = detik / 3600;
    sisa_detik = detik % 3600;
    menit = sisa_detik / 60;
    sisa_detik = sisa_detik % 60;

    printf("Hasil Output: %d Jam, %d Menit, %d Detik\n", jam, menit, sisa_detik);

    return 0;
}
