#include <stdio.h>

typedef struct rekursif{
	int fktrl;
	int fktail;
	int fibo;
	char nama[50];
	char NPM[15];
}rekursif;

int faktorial(int angka){
	if (angka <=1){
		return 1;
	}
	else{
		return angka * faktorial(angka - 1);
	}
}

int fakTail(int angka, int b){
	if (angka<=1){
		return b;
	}
	else{
		return fakTail(angka - 1, angka * b);
	}
}

int fibonanci(int angka){
	if (angka==0){
		return 0;
	}
	else if (angka==1){
		return 1;
	}
	else{
		return fibonanci(angka-1)+fibonanci(angka-2);
	}
}

int main(){
	rekursif rksf;
	int i, pilihan, hasil;
	
	printf("Masukkan nama\t: ");
	scanf("%[^\n]%*c", &rksf.nama);
	printf("Masukkan NPM\t: ");
	scanf("%[^\n]%*c", &rksf.NPM);
	printf("\n");
	printf("Menu\n");
	printf("1. Rekursif faktorial\n");
	printf("2. Rekursif faktorial tail\n");
	printf("3. Rekursif fibonanci\n");
	printf("4. EXIT\n");
	printf("Pilih menu yang disajikan: ");
	scanf("%d", &pilihan);
	switch(pilihan){
		case 1:
			system("cls");
			printf("=========================================\n");
			printf("Masukkan angka yang anda inginkan: ");
			scanf("%d", &rksf.fktrl);
			hasil=faktorial(rksf.fktrl);
			printf("=========================================\n");
			printf("Nama\t: %s\n", rksf.nama);
			printf("NPM\t: %s\n", rksf.NPM);
			printf("Nilai Faktorial dari %d adalah %d", rksf.fktrl, hasil);
			break;
		case 2:
			system("cls");
			printf("=========================================\n");
			printf("Masukkan angka yang anda inginkan: ");
			scanf("%d", &rksf.fktail);
			hasil=fakTail(rksf.fktail,1);
			printf("=========================================\n");
			printf("Nama\t: %s\n", rksf.nama);
			printf("NPM\t: %s\n", rksf.NPM);
			printf("Nilai Faktorial Tail dari %d adalah %d", rksf.fktail, hasil);
			break;
		case 3:
			system("cls");
			printf("=========================================\n");
			printf("Masukkan jumlah fibonanci yang anda inginkan: ");
			scanf("%d", &rksf.fibo);
			hasil=0;
			printf("=========================================\n");
			printf("Nama\t: %s\n", rksf.nama);
			printf("NPM\t: %s\n", rksf.NPM);
			for(i=0;i<=rksf.fibo;i++){
				printf("Nilai Fibonanci ke %d adalah %d\n", i, fibonanci(hasil));
				hasil++;
			}
			break;
		default:
			printf("EXIT");
			break;
	}
}
