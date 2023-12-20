#include <stdio.h>

int main() {
    // Deklarasi variabel
    float nilaiKehadiran, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    
    // Input nilai mahasiswa
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &nilaiKehadiran);

    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilaiTugas);

    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilaiUTS);

    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilaiUAS);

    // Menghitung nilai akhir
    nilaiAkhir = 0.2 * nilaiKehadiran + 0.2 * nilaiTugas + 0.25 * nilaiUTS + 0.35 * nilaiUAS;

    // Menentukan kategori nilai akhir
    if (nilaiAkhir >= 0 && nilaiAkhir <= 44) {
        printf("Nilai Akhir: %.2f (E)\n", nilaiAkhir);
        printf("Maaf, Anda tidak lulus!\n");
    } else if (nilaiAkhir >= 45 && nilaiAkhir <= 55) {
        printf("Nilai Akhir: %.2f (D)\n", nilaiAkhir);
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilaiAkhir >= 56 && nilaiAkhir <= 65) {
        printf("Nilai Akhir: %.2f (C)\n", nilaiAkhir);
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilaiAkhir >= 66 && nilaiAkhir <= 75) {
        printf("Nilai Akhir: %.2f (B)\n", nilaiAkhir);
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilaiAkhir >= 76 && nilaiAkhir <= 80) {
        printf("Nilai Akhir: %.2f (B+)\n", nilaiAkhir);
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilaiAkhir >= 81 && nilaiAkhir <= 85) {
        printf("Nilai Akhir: %.2f (B+)\n", nilaiAkhir);
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilaiAkhir >= 86 && nilaiAkhir <= 90) {
        printf("Nilai Akhir: %.2f (A)\n", nilaiAkhir);
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilaiAkhir >= 91 && nilaiAkhir <= 100) {
        printf("Nilai Akhir: %.2f (A)\n", nilaiAkhir);
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else {
        printf("Nilai tidak valid. Pastikan nilai berada dalam rentang 0-100.\n");
    }

    return 0;
}
