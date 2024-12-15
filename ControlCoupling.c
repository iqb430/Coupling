#include <stdio.h>

// Modul 1: Fungsi yang bergantung pada kontrol
void cetakHasil(int nilai, int mode) {
    if (mode == 1) {
        printf("Hasil dalam desimal: %d\n", nilai);
    } else if (mode == 2) {
        printf("Hasil dalam heksadesimal: %x\n", nilai);
    }
}

// Modul 2: Memanggil fungsi dengan kontrol
int main() {
    int nilai = 255;
    cetakHasil(nilai, 1); // Mode desimal
    cetakHasil(nilai, 2); // Mode heksadesimal
    return 0;
}
