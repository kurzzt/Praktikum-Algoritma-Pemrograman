/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : CekProsesBil.c
Deskripsi       : Menghitung dan menampilkan output hasil klasifikasi sebuah bilangan
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    int N;

    //Algoritma
    printf("Nilai bilangan : ");
    scanf("%d", &N);

    if (N % 2 == 0){
        N += 3;
        if (N % 5 == 0){
            N += 5;
        }else{
            N += 2;
        }
    }else{
        N += 2;
        if (N%3 == 0){
            N += 4;
        }else{
            N += 1;
        }
    }

    printf("%d", N);
    return 0;
}
