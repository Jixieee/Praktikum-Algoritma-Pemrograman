#include <stdio.h>

int main() {
    FILE *fptr;
    char c;

    fptr = fopen("datamahasiswa.txt", "r");  // Membuka file untuk dibaca

    if (fptr == NULL) {
        printf("Error: File tidak ditemukan atau tidak dapat dibuka\n");
        return 1;
    }

    printf("Isi file datamahasiswa.txt:\n");
    c = fgetc(fptr);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(fptr);
    }

    fclose(fptr);  // Menutup file
    return 0;
}

