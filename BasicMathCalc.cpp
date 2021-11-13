#include <stdio.h>
#include <windows.h>
#include <math.h>

void pakaiCalculator();
void functionCalculator();


void opening(){
	
	puts("==================================================================================================================================================");
	Sleep(500);
	puts("   *******     *********     **            ******     **       **   **            *********     *************     **********     *******");
	Sleep(500);
	puts("  ********    **       **    **           ********    **       **   **           **       **    *************    **        **    **     **");
	Sleep(500);
	puts(" **          **         **   **          **           **       **   **          **         **         **        **          **   **     **");
	Sleep(500);
	puts(" **          **         **   **          **           **       **   **          **         **         **        **          **   *******");
	Sleep(500);
	puts(" **          *************   **          **           **       **   **          *************         **        **          **   **   **");
	Sleep(500);
	puts(" **          *************   **          **           **       **   **          *************         **        **          **   **    **");
	Sleep(500);
	puts(" **          **         **   **          **           **       **   **          **         **         **        **          **   **     **");
	Sleep(500);
	puts("  ********   **         **   *********    ********     *********    *********   **         **         **         **        **    **      **");
	Sleep(500);
	puts("   *******   **         **   *********     *******      *******     *********   **         **         **          **********     **      **");
	Sleep(500);
	puts("==================================================================================================================================================");
	Sleep(500);
	
	puts("Selamat datang di basic math calculator :) ");
	puts("Kalkulator ini mendukung penghitungan matematika sederhana dengan operator : ");
	puts("	+ untuk penjumlahan");
	puts("	- untuk pengurangan");
	puts("	* untuk perkalian");
	puts("	/ untuk pembagian");
	puts("	v untuk operasi akar");
	puts("	^ untuk operasi pangkat\n");
	
	functionCalculator();
	
}

double operasiBagi (double a, double b){
	double temp = a/b;
	return temp;
}

double operasiKali (double a, double b){
	double temp = a*b;
	return temp;
}

double operasiKurang (double a, double b){
	double temp = a-b;
	return temp;
}

double operasiTambah (double a, double b){
	double temp = a+b;
	return temp;
}

void functionCalculator(){
	double num, num1, num2;
	char operand;
	
	printf("Silahkan masukkan angka pertama : ");
	scanf("%lf", &num1);
	getchar();
	
	printf("Silahkan masukkan operasi yang ingin dilakukan : ");
	scanf("%c", &operand);
	getchar();
	
	if(operand == 'v'){
		num = sqrt(num1);
		printf("Jadi hasil akar dari %.2lf adalah : %.2lf\n\n\n", num1, num);
		pakaiCalculator();
	}else if (operand == '^'){
		printf("Mau di pangkat berapa kali : ");
		scanf("%lf", &num2);
		getchar();
		double temp = pow(num1,num2);
		printf("Jadi hasil dari %.2lf pangkat %.2lf adalah : %.2f\n\n\n", num1, num2, temp);
		
		pakaiCalculator();
	}else{
		printf("Silahkan masukkan angka kedua : ");
		scanf("%lf", &num2);
		getchar();
		if(num2==0 && operand == '/'){
		printf("Sebuah angka tidak dapat dibagi dengan 0\n\n");
		pakaiCalculator();
		}else{
		if(operand == '+'){
			num = operasiTambah(num1, num2);
			printf("Jadi hasil %.2lf + %.2lf adalah : %.2lf", num1, num2, num);
		}else if(operand == '-'){
			num = operasiKurang(num1, num2);
			printf("Jadi hasil %.2lf - %.2lf adalah : %.2lf", num1, num2, num);
		}else if(operand == '*'){
			num = operasiKali(num1, num2);
			printf("Jadi hasil %.2lf * %.2lf adalah : %.2lf", num1, num2, num);
		}else if(operand == '/'){
			num = operasiBagi(num1, num2);
			printf("Jadi hasil %.2lf / %.2lf adalah : %.2lf", num1, num2, num);
		}else{
			puts("\nMohon maaf, operator yang anda masukkan tidak dapat kami proses");
			printf("Silahkan mencoba lagi dengan menggunakan operator : \n");
			puts("	+ untuk penjumlahan");
			puts("	- untuk pengurangan");
			puts("	* untuk perkalian");
			puts("	/ untuk pembagian");
			puts("	v untuk operasi akar");
			puts("	^ untuk operasi pangkat\n");

		}
		printf("\n\n");
		pakaiCalculator();
	}
		
	}
	
}

void pakaiCalculator(){
	char calc;
	
	printf("Apakah anda ingin menggunakan kalkulator lagi? (y atau t) : ");
	scanf("%c", &calc);
	getchar();
	puts("");
	
	if(calc=='y'){
		system("cls");
		functionCalculator();
	}else{
		printf("Terimakasih telah menggunakan kalkulator ini :)\n");
	}
}


int main(){
	opening();
	
	
	
	return 0;
}
