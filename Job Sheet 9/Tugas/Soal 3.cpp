#include <stdio.h>

int main() {
    // A. Pertanyaan Pertama
    int Lesley_A = 57082;
    int Layla_A = Lesley_A;
    int Balmond_A = Layla_A + 1;

    printf("A.1 Nilai Layla: %d\n", Layla_A);
    printf("A.2 Nilai Balmond: %d\n\n", Balmond_A);

    // B. Pertanyaan Kedua
    int Lesley_B = 57082;
    int *Layla_B = &Lesley_B;
    int Balmond_B = *Layla_B + 1;

    printf("B.1 Nilai Layla: %d\n", *Layla_B);
    printf("B.2 Nilai Balmond: %d\n", Balmond_B);

    return 0;
}
