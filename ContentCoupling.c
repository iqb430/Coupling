#include <stdio.h>

// Modul 1
typedef struct {
    int panjang;
    int lebar;
} PersegiPanjang;

// Modul 2
void ubahData(PersegiPanjang *pp) {
    pp->panjang = 20;  // Akses langsung ke data internal
    pp->lebar = 10;
}

int main() {
    PersegiPanjang pp = {10, 5};
    printf("Sebelum: Panjang = %d, Lebar = %d\n", pp.panjang, pp.lebar);
    ubahData(&pp);  // Mengubah data internal modul lain
    printf("Sesudah: Panjang = %d, Lebar = %d\n", pp.panjang, pp.lebar);
    return 0;
}
