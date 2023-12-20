#include <stdio.h>

int main() {
    int pilihan;
    float angka1, angka2, hasil;

    printf("Menu:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Pilih operasi: ");
    scanf("%d", &pilihan);

    printf("Masukkan dua bilangan: ");
    scanf("%f %f", &angka1, &angka2);

    switch (pilihan) {
        case 1:
            hasil = angka1 + angka2;
            printf("Hasil penjumlahan: %.2f\n", hasil);
            break;
        case 2:
            hasil = angka1 - angka2;
            printf("Hasil pengurangan: %.2f\n", hasil);
            break;
        case 3:
            hasil = angka1 * angka2;
            printf("Hasil perkalian: %.2f\n", hasil);
            break;
        case 4:
            if (angka2 == 0) {
                printf("Tidak dapat melakukan pembagian dengan nol.\n");
            } else {
                hasil = angka1 / angka2;
                printf("Hasil pembagian: %.2f\n", hasil);
            }
            break;
        default:
            printf("Operasi tidak valid.\n");
            break;
    }

    return 0;
}
