/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : jarakPBola.c
Deskripsi       : Menghitung dan menampilkan jarak GLBB
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    float v0, t, y;
    const float g = 9.8;

    //Algoritma
    printf("Masukkan besar kecepatan awal: ");
    scanf("%f", &v0);
    printf("\nMasukkan lama waktu tempuh: ");
    scanf("%f", &t);

    y = (v0*t)-(g*t*t/2);
    printf("\nJarak tempuh benda yang mengalami gerak parabola : ");
    printf("%.2f",y);
    return 0;
}
