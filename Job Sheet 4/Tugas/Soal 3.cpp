#include <stdio.h>

int main() {
    float presensi = 85, praktek = 65, uts = 80, uas = 75, nilai_akhir;

    nilai_akhir = (presensi * 0.1) + (praktek * 0.2) + (uts * 0.3) + (uas * 0.4);

    printf("Nilai akhir praktikum: %.2f\n", nilai_akhir);

    return 0;
}
