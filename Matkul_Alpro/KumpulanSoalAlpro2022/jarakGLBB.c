/*
Nama    		: Dian Pagita
NIM     		: 24060121130092
Nama Program 	: jarakGLBB.c
Deskripsi 		: Menghitung dan menampilkan jarak GLBB
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
	//Kamus
	float v0, t, a, S;
	
	//Algoritma
	printf("Masukkan besar kecepatan awal : ");
	scanf("%f", &v0);
	printf("\nMasukkan lama waktu tempuh : ");
	scanf("%f", &t);
	printf("\nMasukkan besar percepatan : ");
	scanf("%f", &a);
	
	S = (float)(v0 * t) + (float)(a*t*t / 2);
	printf("\nJarak GLBB : ");
	printf("%.2f",S);
	return 0;
}
