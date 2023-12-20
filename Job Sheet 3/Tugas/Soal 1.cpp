#include <stdio.h>

int main() {
    float rupiah = 2500000, dollar, kurs = 14250;

    dollar = rupiah / kurs;

    printf("Jumlah dollar yang harus diberikan: $%.2f\n", dollar);

    return 0;
}
