#include <stdio.h>

typedef struct rekursif2{
	int angka;
	char nama[50];
	char NPM[15];
}rekursif2;

int BintangAtas(int n) {
	static int i;
	if(n==0){
		return;
	}
	else{
		for(i=0;i<n;i++){
			printf("*",i);
		}
		printf("\n");
		BintangAtas(n-1);
	}
}
int BintangBawah(int n) {
	static int i;
	if(n==0){
		return;
	}
	else{
		BintangBawah(n-1);
		for(i=0;i<=n;i++){
			printf("*",i);
		}
		printf("\n");
	}
}

int main(){
	rekursif2 rksf2;
	
	printf("Masukkan nama\t: ");
	scanf("%[^\n]%*c", &rksf2.nama);
	printf("Masukkan NPM\t: ");
	scanf("%[^\n]%*c", &rksf2.NPM);
	printf("Masukkan angka yang diinginkan: ");
	scanf("%d", &rksf2.angka);
	system("cls");
	printf("Nama\t: %s\n", rksf2.nama);
	printf("NPM\t: %s\n", rksf2.NPM);
	BintangAtas(rksf2.angka);
	BintangBawah(rksf2.angka-1);
}
