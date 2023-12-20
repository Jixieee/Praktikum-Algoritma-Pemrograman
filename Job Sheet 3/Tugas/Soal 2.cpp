#include <stdio.h>

int main() {
    float celcius, fahrenheit, kelvin, reamur;

    printf("Input Suhu (Celcius)	= ");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 1.8) + 32;
    kelvin = celcius + 273.15;
    reamur = celcius * 0.8;

    printf("Suhu dalam Kelvin	= %.2f derajat Kelvin\n", kelvin);
	printf("Suhu dalam Fahrenheit	= %.2f derajat Fahrenheit\n", fahrenheit);
    printf("Suhu dalam Reamur	= %.2f derajat Reamur\n", reamur);

    return 0;
}
