#include <stdio.h>
#include <string.h>

struct zodiak {
    char nama[20];
    int bulan_awal;
    int hari_awal;
    int bulan_akhir;
    int hari_akhir;
};

int main() {
    struct zodiak zodiaks[12] = {
        {"Capricorn", 1, 1, 1, 19},
        {"Aquarius", 1, 20, 2, 18},
        {"Pisces", 2, 19, 3, 20},
        {"Aries", 3, 21, 4, 19},
        {"Taurus", 4, 20, 5, 20},
        {"Gemini", 5, 21, 6, 20},
        {"Cancer", 6, 21, 7, 22},
        {"Leo", 7, 23, 8, 22},
        {"Virgo", 8, 23, 9, 22},
        {"Libra", 9, 23, 10, 22},
        {"Scorpio", 10, 23, 11, 21},
        {"Sagittarius", 11, 22, 12, 21}
    };

    int hari, bulan, tahun;
    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &hari, &bulan, &tahun);

    int i;
    for (i = 0; i < 12; i++) {
        if ((bulan == zodiaks[i].bulan_awal && hari >= zodiaks[i].hari_awal) || (bulan == zodiaks[i].bulan_akhir && hari <= zodiaks[i].hari_akhir)) {
            printf("Zodiak Anda adalah : %s\n", zodiaks[i].nama);
            break;
        }
    }

    return 0;
}
