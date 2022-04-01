/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : CekPrima.c
Deskripsi       : Mengidentifikasi dan menampilkan pada layar apakah
inputan bilangan integer sembarang N (N>0) bilangan prima atau bukan
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    int N, i, m,c=0;

    //Algoritma
    printf("Masukkan bilangan : ");
    scanf("%d", &N);

    if (N>0){
        if (N == 1) printf("1 bukanlah bilangan prima");
        else{
            m = N/2;
            for(i=2; (i<=m); i++){
                if (N%i == 0){
                    printf("%d bukanlah bilangan prima", N);
                    c =1;
                    break;
                }
            }

            if (c==0) printf("%d adalah bilangan prima", N);
        }
    }else{
        printf("Masukkan input bernilai integer positif");
    }
    return 0;
}
