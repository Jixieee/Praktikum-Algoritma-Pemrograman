#include <stdio.h>
#include <math.h>

int main() {
    char pilihan;
    double hasil, r, s, l, w, h;

    // Menampilkan menu
    printf("Pilih bangun ruang:\n");
    printf("a) Bola\n");
    printf("b) Kubus\n");
    printf("c) Balok\n");
    printf("d) Tabung\n");
    printf("Masukkan pilihan (a/b/c/d): ");
    scanf(" %c", &pilihan); // Menggunakan spasi sebelum %c untuk menghindari masalah input buffer

    // Switch case untuk memilih rumus berdasarkan pilihan
    switch (pilihan) {
        case 'a':
        case 'A':
            // Rumus luas permukaan bola
            printf("Masukkan jari-jari bola (r): ");
            scanf("%lf", &r);
            hasil = 4 * M_PI * r * r;
            printf("Luas Permukaan Bola: %.2lf\n", hasil);
            break;

        case 'b':
        case 'B':
            // Rumus luas permukaan kubus
            printf("Masukkan panjang sisi kubus (s): ");
            scanf("%lf", &s);
            hasil = 6 * s * s;
            printf("Luas Permukaan Kubus: %.2lf\n", hasil);
            break;

        case 'c':
        case 'C':
            // Rumus luas permukaan balok
            printf("Masukkan panjang (l): ");
            scanf("%lf", &l);
            printf("Masukkan lebar (w): ");
            scanf("%lf", &w);
            printf("Masukkan tinggi (h): ");
            scanf("%lf", &h);
            hasil = 2 * (l*w + l*h + w*h);
            printf("Luas Permukaan Balok: %.2lf\n", hasil);
            break;

        case 'd':
        case 'D':
            // Rumus luas permukaan tabung
            printf("Masukkan jari-jari tabung (r): ");
            scanf("%lf", &r);
            printf("Masukkan tinggi tabung (h): ");
            scanf("%lf", &h);
            hasil = 2 * M_PI * r * (r + h);
            printf("Luas Permukaan Tabung: %.2lf\n", hasil);
            break;

        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
