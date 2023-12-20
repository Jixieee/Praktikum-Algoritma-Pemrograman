#include <stdio.h>

int main() {
    char nama_pembeli[50], nama_barang[50];
    float harga_satuan, harga_total;
    int jumlah_barang;

    printf("Masukkan nama pembeli: ");
    fgets(nama_pembeli, 50, stdin);

    printf("Masukkan nama barang: ");
    fgets(nama_barang, 50, stdin);

    printf("Masukkan harga satuan barang: ");
    scanf("%f", &harga_satuan);

    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlah_barang);

    harga_total = harga_satuan * jumlah_barang;

    printf("Harga total: Rp. %.2f\n", harga_total);

    return 0;
}
