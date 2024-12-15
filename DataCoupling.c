#include <stdio.h>

// Modul 1: Menghitung luas persegi panjang
int hitungLuas(int panjang, int lebar) {
    return panjang * lebar;
}

// Modul 2: Memanggil fungsi dengan parameter data
int main() {
    int panjang = 10, lebar = 5;
    printf("Luas: %d\n", hitungLuas(panjang, lebar));
    return 0;
}


