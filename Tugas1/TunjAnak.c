/*
Nama            : Dian Pagita
NIM             : 24060121130092
Nama Program    : TunjAnak.c
Deskripsi       : Menghitung dan menampilkan pada layar tunjangan anak yang
diperoleh berdasarkan gaji pokok dan jumlah anak
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Kamus
    int ank, gj;
    float t;

    //Algoritma
    printf("Jumlah anak karyawan : ");
    scanf("%d", &ank);
    printf("Besar gaji pokok : ");
    scanf("%d", &gj);

    if (0 <= ank < 3){
        t = ank*(0.1*gj);
    }else{
        t = 3*(0.1*gj);
    }
    printf("%.2f", t);
    return 0;
}
