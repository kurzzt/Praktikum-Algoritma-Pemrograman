/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : volBolaKerct.c
Deskripsi       : Menghitung dan menampilkan volume bola dan volume kerucut
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    const float PHI = 3.14159;
    float r, Vb, Vk;

    //Algoritma
    printf("Masukkan besar jari-jari : ");
    scanf("%f", &r);

    Vb = 4/3*(PHI*r*r*r);
    Vk = (0.5*Vb);
    printf("Volume bola : %.3f \n",Vb);
    printf("Volume kerucut : %.3f", Vk);

    return 0;
}
