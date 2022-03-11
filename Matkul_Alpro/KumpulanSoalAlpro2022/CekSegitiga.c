/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : CekSegitiga.c
Deskripsi       : Mengidentifikasi dan menampilkan pada layar jenis segitiga
berdasarkan input nilai ketiga sisi
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    int a, b, c;

    //Algoritma
    printf("Masukkan nilai sisi pertama segitiga : ");
    scanf("%d", &a);
    printf("Masukkan nilai sisi kedua segitiga : ");
    scanf("%d", &b);
    printf("Masukkan nilai sisi ketiga segitiga : ");
    scanf("%d", &c);

    if (a <0 || b < 0 || c < 0){
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
    else{
        if (a==b && b==c){
            printf("Segitiga sama sisi");
        }
        else if (a==b || b==c || c==a){
            printf("Segitiga sama kaki");
        }
        else{
            printf("Segitiga sembarang");
        }
    }
    return 0;
}
