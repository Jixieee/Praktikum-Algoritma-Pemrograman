#include <stdio.h>

// Deklarasi fungsi rekursif untuk perkalian
int perkalianRekursif(int a, int b) {
    // Kasus dasar: jika b = 0, hasil perkalian adalah 0
    if (b == 0) {
        return 0;
    }

    // Rekursif: a + perkalianRekursif(a, b - 1)
    return a + perkalianRekursif(a, b - 1);
}

int main() {
    // Deklarasi variabel
    int bilangan1 = 12;
    int bilangan2 = 6;

    // Memanggil fungsi rekursif untuk menghitung hasil perkalian
    int hasilPerkalian = perkalianRekursif(bilangan1, bilangan2);

    // Menampilkan hasil
    printf("Hasil perkalian %d x %d = %d\n", bilangan1, bilangan2, hasilPerkalian);

    return 0;
}
