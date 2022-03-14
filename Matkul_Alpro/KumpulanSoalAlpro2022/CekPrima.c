/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : CekPrima.c
Deskripsi       : Mengidentifikasi dan menampilkan pada layar apakah
inputan bilangan integer sembarang N (N>0) bilangan prima atau bukan
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //Kamus
    int N, i=1, c=0;

    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d", &N);

    if (N>0){
        for(i=2; i<=(sqrt(N)); i++){
            if (N%i == 0){
                c = 1;
                break;
            }
        }
        if (c = 1){
            printf("%d adalah bilangan prima", N);
        }else{
            printf("%d bukanlah bilangan prima", N);
        }
    }else{
        printf("Masukkan input bernilai integer positif");
    }
    return 0;
}


