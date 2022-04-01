/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : Kalk-SS.c
Deskripsi       : Menghitung dan menampilkan pada layar hasil operasi
aritmatika dari 2 nilai input dan pilihan operasi yang mau dilakukan

*/

#include <stdio.h>

int main(){
    // Kamus
    int iA, iB;
    char x;

    // Algoritma
    printf("===Kode Operasi Aritmatika===\n");
    printf("=== a untuk a+b==============\n");
    printf("=== b untuk a-b==============\n");
    printf("=== c untuk a*b==============\n");
    printf("=== d untuk a/b==============\n");
    printf("=== e untuk a div b==========\n");
    printf("=== f untuk a mod b==========\n");
    printf("=============================\n");
    printf("Masukkan nilai a, b, dan kode operasi aritmatika : \n");
    scanf("%d %d %c", &iA, &iB, &x);

    printf("Hasil : ");
    switch (x){
        case 'a':
            printf("%d", iA + iB);
            break;
        case 'b':
            printf("%d", iA - iB);
            break;
        case 'c':
            printf("%d", iA * iB);
            break;
        case 'd':
            printf("%f", iA / (float)iB);
            break;
        case 'e':
            printf("%d", iA / iB);
            break;
        case 'f':
            printf("%d", iA % iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
    }
    return 0;
}
