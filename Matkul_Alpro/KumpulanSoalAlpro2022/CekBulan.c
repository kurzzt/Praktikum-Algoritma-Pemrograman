/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : CekBulan.c
Deskripsi       : Mengidentifikasi dan menampilkan output pesan teks
berdasarkan input yang diberikan
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    int Y;

    //Algoritma
    printf("Masukkan nomor bulan : ");
    scanf("%d", &Y);

    switch(Y){
    case 1 :
        printf("Januari");
        break;
    case 2 :
        printf("Februari");
        break;
    case 3 :
        printf("Maret");
        break;
    case 4 :
        printf("April");
        break;
    case 5 :
        printf("Mei");
        break;
    case 6 :
        printf("Juni");
        break;
    case 7 :
        printf("Juli");
        break;
    case 8 :
        printf("Agustus");
        break;
    case 9 :
        printf("September");
        break;
    case 10 :
        printf("Oktober");
        break;
    case 11 :
        printf("Nopember");
        break;
    case 12 :
        printf("Desember");
        break;
    default:
        printf("Masukkan nomor bulan tidak tepat");
    }

    return 0;
}
