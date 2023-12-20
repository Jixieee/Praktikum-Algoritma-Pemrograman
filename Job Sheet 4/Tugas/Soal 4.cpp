#include <stdio.h>

int main() {
    int durasi = 3;
    float tarif_pertama = 15000, tarif_berikutnya = tarif_pertama * 0.5, total_biaya;

    if (durasi == 1) {
        total_biaya = tarif_pertama;
    } else if (durasi > 1) {
        total_biaya = tarif_pertama + (tarif_berikutnya * (durasi - 1));
    }

    printf("Total biaya rental film: Rp. %.2f\n", total_biaya);

    return 0;
}
