#include <stdio.h>

#define PI 3.14

int main() {
    float diameter = 12, jari_jari, volume, luas_permukaan;

    jari_jari = diameter / 2;
    volume = (4.0 / 3) * PI * jari_jari * jari_jari * jari_jari;
    luas_permukaan = 4 * PI * jari_jari * jari_jari;

    printf("Volume bola basket: %.2f cm^3\n", volume);
    printf("Luas permukaan bola basket: %.2f cm^2\n", luas_permukaan);

    return 0;
}
