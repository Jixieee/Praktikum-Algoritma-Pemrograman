#include <stdio.h>

int main() {
    char nama[100];

    printf("Hello, siapa nama lengkapmu? ");
    fgets(nama, 100, stdin);

    printf("Selamat Datang dalam Pemrograman C, %s!\n",nama);

    return 0;
}

