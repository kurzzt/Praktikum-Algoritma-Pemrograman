/*
Nama        : Dian Pagita
NIM         : 24060121130092
Nama File   : SORT_bubble
Deskripsi   : sorting algorithm dengan cara yaitu gelembung air yang akan "mengapung" untuk arr yang terurut membesar : elemen bernilai kecil akan "diapungkan" (ke indeks terkecil), artinya diangkat ke “atas” (indeks terkecil) melalui pertukaran. Pada setiap Pass, tabel "terdiri dari" dua bagian : bagian yang sudah terurut yaitu [1..Pass-1] dan ide dasarnya adalah mengapungkan elemen ke "pass" sampai pada tempatnya.

*/

//Header file
#include <stdio.h>
#include <stdlib.h>

//Fungsi Prosedur Bubble
void bubbleSort(int arr[], int N){
    //Kamus Lokal
    int i, j, sum;

    //Algoritma
    for(i = 0; i < N; i++){
        for(j=0; j < N-i-1; j ++){
            if(arr[j] > arr[j+1]){
                sum = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = sum;
            }
        }
    }
}


//Fungsi Utama
int main(){
    //Kamus
    int N, i, j;

    //Algoritma
    printf("Masukkan jumlah banyak data: ");
    scanf("%d", &N); //Asumsi N pasti integer positif
    int T[N];
    printf("Masukkan %d elemen :\n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    bubbleSort(T, N);
    printf("Hasil sorting dengan bubble algorithm :\n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
      }
    printf("\n");
}


