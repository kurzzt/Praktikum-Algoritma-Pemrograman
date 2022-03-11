/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : gayaSentr.c
Deskripsi       : Menghitung dan menampilkan gaya sentripetal
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    float m, v, r, F;

    //Algoritma
    printf("Masukkan massa benda : ");
    scanf("%f", &m);
    printf("\nMasukkan kecepatan benda: ");
    scanf("%f", &v);
    printf("\nMasukkan jari-jari benda: ");
    scanf("%f", &r);

    F = m*(v*v/r);
    printf("\nBesar gaya sentripetal benda : ");
    printf("%.2f", F);
    return 0;
}
