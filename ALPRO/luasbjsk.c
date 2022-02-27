/*Kode Sumber 1.2 Bahas C Menghitung dan Menampilkan Luas Bujursangkar*/

/*Nama File: luasbjsk.c*/
/*Deskripsi: menghitung luas bujur sangkar dan menampilkan*/

#include <stdio.h> /*Header file*/

int main(){ /*Program Utama*/
/*Kamus*/
  int S;
  int Luas;
/*Algoritma*/
  printf("======Menghitung Luas Bujursangkar=======\n");
  printf("=========================================\n");
  printf("\nMasukan Sisi (S) = ");
  scanf("%d",&S); /*input*/
  Luas=S*S; /*(proses) hitung luas bujursangkar*/
  /*output*/
  printf("\n=========================================\n");
  printf("Luas bujursangkar (S x S)==> %d X %d = %d\n",S,S,Luas);
  printf("=========================================\n");
  return 0;
}
