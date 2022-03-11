/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : luasKellLayang.c
Deskripsi       : Menghitung dan menampilkan luas dan keliling sebuah layang-
layang
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    float s1, s2, d1, d2, Luas, Kell;

    //Algoritma
    printf("Masukkan besar sisi pertama : ");
    scanf("%f", &s1);
    printf("\nMasukkan besar sisi kedua : ");
    scanf("%f", &s2);
    printf("\nMasukkan besar diagonal pertama : ");
    scanf("%f", &d1);
    printf("\nMasukkan besar diagonal kedua : ");
    scanf("%f", &d2);

    Luas = 0.5*d1*d2;
    Kell = 2*(s1+s2);
    printf("\nLuas layangan : %.3f", Luas);
    printf("\nKeliling layangan : %.3f", Kell);
    return 0;
}
