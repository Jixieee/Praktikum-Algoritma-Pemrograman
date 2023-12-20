#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "BORLAND";
    char *ptr;

	// Iterasi melalui setiap karakter
    for (int i = 6; i >= 0; i--) {
        ptr = &str[i]; // Set pointer ke alamat karakter ke-i

		// Iterasi dari karakter ke-i hingga karakter terakhir
        for (int j = i; j < 7; j++) {
            printf("%c", *ptr); // Cetak karakter yang ditunjuk pointer
            ptr++; // Pindah pointer ke alamat selanjutnya
        }

        printf("\n");
    }

    return 0;
}
