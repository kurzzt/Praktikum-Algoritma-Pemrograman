/*
Nama        : Dian Pagita
NIM         : 24060121130092
Nama File   : SORT_selection
Deskripsi   : sorting algorithm dengan cara menghasilkan nilai maksimum arr (indeksnya, nilai maks), kemudian menukarnya dengan elemen terujung; elemen terujung ini "diisolasi" dan tidak diikut sertakan pada proses berikutnya. proses di-loop untuk sisa arr. Karena elemen terujung bernilai maksimum adalah indeks pertama arr, maka arr terurut mengecil: T1 ≥ T2 ≥ T3 ≥ ... ≥TN.

*/

//Header file
#include <stdio.h>
#include <stdlib.h>

// Fungsi Prosedur Selection
int SelectionSort(int arr[], int n){
    //Kamus Lokal
    int i, j, loc, swab;

    //Algoritma
    for(i = 0; i < (n-1); i++){
        loc = i;
        for (j = i + 1; j < n; j++){
            if(arr[loc] > arr[j]){
                loc = j;
            }
        }
        if(loc != i){
          swab = arr[i];
          arr[i] = arr[loc];
          arr[loc] = swab;
        }
    }
}

//Fungsi Utama
int main(){
    //Kamus
    int N, i;

    //Algoritma
    printf("Masukkan jumlah banyak data: ");
    scanf("%d", &N); //Asumsi N pasti integer positif
    int T[N];
    printf("Masukkan %d elemen :\n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    SelectionSort(T, N);
    printf("Hasil sorting dengan selection algorithm :\n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}

