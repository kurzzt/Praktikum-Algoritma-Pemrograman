/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : CekHari.c
Deskripsi       : Menuliskan dan menampilkan pada layar nama hari berdasarkan
input dari keyboard
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    int X;

    //Algoritma
    printf("Masukkan nomor hari : ");
    scanf("%d", &X);

    switch(X){
        case 1 : 
			printf("Senin");
			break;
        case 2 : 
			printf("Selasa");
			break;
        case 3 : 
			printf("Rabu");
			break;
        case 4 : 
			printf("Kamis");
			break;
        case 5 : 
			printf("Jumat"); 
			break;
        case 6 : 
			printf("Sabtu"); 
			break;
        case 7 : 
			printf("Minggu"); 
			break;
        default: 
			printf("Masukkan nomor hari tidak tepat");
    }

    return 0;
}
