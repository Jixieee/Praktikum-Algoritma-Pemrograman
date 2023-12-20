#include <stdio.h>
#include <string.h>

int main() {
    // Deklarasi variabel
    char username[20], password[20];
    char usernameDefault[] = "Jixieee";
    char passwordDefault[] = "kopisusu";

    // Input username
    printf("Masukkan username: ");
    scanf("%s", username);

    // Input password
    printf("Masukkan password: ");
    scanf("%s", password);

    // Memeriksa kecocokan username dan password
    if (strcmp(username, usernameDefault) == 0 && strcmp(password, passwordDefault) == 0) {
        printf("Berhasil login\n");
    } else {
        printf("Password salah\n");
    }

    return 0;
}
