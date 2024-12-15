#include <stdio.h>

// Variabel global yang digunakan bersama
int panjang = 10;
int lebar = 5;

// Modul 1: Menghitung luas menggunakan variabel global
int hitungLuas() {
    return panjang * lebar;
}

// Modul 2: Mengubah variabel global
void setDimensi(int p, int l) {
    panjang = p;
    lebar = l;
}

int main() {
    printf("Luas awal: %d\n", hitungLuas());
    setDimensi(7, 3); // Mengubah dimensi global
    printf("Luas baru: %d\n", hitungLuas());
    return 0;
}
