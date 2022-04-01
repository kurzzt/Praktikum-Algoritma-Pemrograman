/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : CekBilSemb.c
Deskripsi       : Mengklasifikasikan, menuliskan, dan menampilkan pada
layar output berupa pesan teks
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    int i;

    //Algoritma
    printf("Masukkan nilai bilangan : ");
    if (scanf("%d", &i) != 1){
        printf("Bukan termasuk sebuah bilangan");
    }else{
        if (i > 0){
            printf("Bilangan bulat positif");
        }
        else if (i == 0){
            printf("Bilangan nol");
        }
        else{
            printf("Bilangan bulat negatif");
        }
    }
    return 0;
}
