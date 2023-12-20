#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];

    // Input kalimat dari pengguna
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    // Menghilangkan karakter newline (\n) dari kalimat
    kalimat[strcspn(kalimat, "\n")] = '\0';

    // Menampilkan kalimat terbalik
    printf("Kebalikannya: ");
    for (int i = strlen(kalimat) - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }

    printf("\n");

    return 0;
}
