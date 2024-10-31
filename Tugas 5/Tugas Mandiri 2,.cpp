#include <stdio.h>

int main() {
    char kode[10], jenis;
    float harga, diskon, hargaSetelahDiskon;

    
    printf("Masukkan kode barang: ");
    scanf("%s", kode);
    printf("Masukkan jenis barang (A/B/C): ");
    scanf(" %c", &jenis);
    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    
    if (jenis == 'A' || jenis == 'a') {
        diskon = 0.10; 
    } else if (jenis == 'B' || jenis == 'b') {
        diskon = 0.15; 
    } else if (jenis == 'C' || jenis == 'c') {
        diskon = 0.20; 
    } else {
        printf("Jenis barang tidak valid.\n");
        return 1;
    }

    
    hargaSetelahDiskon = harga - (harga * diskon);

    
    printf("Jenis barang %c mendapat diskon %.0f%%, Harga setelah didiskon = %.0f\n", 
           jenis, diskon * 100, hargaSetelahDiskon);

    return 0;
}

