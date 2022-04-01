/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : CekSeriPosiif.c
Deskripsi       : Menghitung dan menampilkan pada layar total ketiga nilai
input tahanan
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    float X, Z, Y, R;

    //Algoritma
    printf("Masukkan nilai tahanan pertama : ");
    scanf("%f", &X);
    printf("Masukkan nilai tahanan kedua : ");
    scanf("%f", &Z);
    printf("Masukkan nilai tahanan ketiga : ");
    scanf("%f", &Y);

    if ((X>0) && (Y>0) && (Z>0)){
        R = X+Y+Z;
        printf("%.2f", R);
    }else{
        printf("Masukkan tahanan tidak boleh negatif");
    }
    return 0;
}
