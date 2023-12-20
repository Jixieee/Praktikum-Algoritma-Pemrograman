#include <stdio.h>

int main() {
    char nama[100], nim[20], prodi[50], fakultas[50];
    float nilai_praktikum, uts, uas, nilai_akhir;

    printf("Nama	: ");
    fgets(nama, 100, stdin);

    printf("NIM	: ");
    fgets(nim, 20, stdin);

    printf("Prodi	: ");
    fgets(prodi, 50, stdin);

    printf("Fakultas: ");
    fgets(fakultas, 50, stdin);

    printf("Nilai Praktikum	: ");
    scanf("%f", &nilai_praktikum);

    printf("Nilai UTS	: ");
    scanf("%f", &uts);

    printf("Nilai UAS	: ");
    scanf("%f", &uas);

    nilai_akhir = 0.3 * nilai_praktikum + 0.3 * uts + 0.4 * uas;

    printf("Nilai Akhir	: %.2f\n", nilai_akhir);

    return 0;
}
