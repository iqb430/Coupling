#include <stdio.h>

// Struktur data kompleks
typedef struct {
    int panjang;
    int lebar;
} PersegiPanjang;

// Modul 1: Menghitung luas dari struktur
int hitungLuas(PersegiPanjang pp) {
    return pp.panjang * pp.lebar;
}

// Modul 2: Memanggil fungsi dengan struktur
int main() {
    PersegiPanjang pp = {10, 5};
    printf("Luas: %d\n", hitungLuas(pp));
    return 0;
}
