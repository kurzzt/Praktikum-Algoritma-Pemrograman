/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : BiayaParkir.c
Deskripsi       : Menghitung dan menampilkan pada layar total
akhir biaya parkir berdasarkan lama parkir
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    int x, y;

    //Algoritma
    printf("Masukkan lama parkir : ");
    scanf("%d", &x);


    //Dengan asumsi bahwa lama parkir pasti bilangan integer positif
    if (x==1||x==2){
        y = 2000;
    }else{
        y = (2000+(500*(y-2)));
    }
    printf("Biaya parkir : %d", y);
    return 0;
}
