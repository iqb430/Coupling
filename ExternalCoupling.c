#include <stdio.h>

// Variabel eksternal
int sharedData = 0;

// Modul 1: Mengubah data eksternal
void setSharedData(int value) {
    sharedData = value;
}

// Modul 2: Membaca data eksternal
void printSharedData() {
    printf("Shared Data: %d\n", sharedData);
}

int main() {
    setSharedData(42);   // Mengubah nilai data eksternal
    printSharedData();   // Membaca nilai data eksternal
    return 0;
}
