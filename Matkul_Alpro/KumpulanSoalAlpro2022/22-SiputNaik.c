/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : SiputNaik.c
Deskripsi       : Menghitung dan menampilkan pada layar berapa hari waktu
yang dibutuhkan siput untuk mencapai ketinggian N meter
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    int i=0;
    float N, c;

    //Algoritma
    printf("Kedalaman lubang dalam meter : ");
    scanf("%f", &N);

    if (N<0){
        printf("Masukkan nilai kedalaman bilangan positif");
    }else{
        c = N;
        while (c>0){
            c = c-(0.2);
            i++;
        }
        printf("%d hari adalah waktu untuk siput mencapai ketinggian %.3f meter", i,N);
    }

    return 0;
}


