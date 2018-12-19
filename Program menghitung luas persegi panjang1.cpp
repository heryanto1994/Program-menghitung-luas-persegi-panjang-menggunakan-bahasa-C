#include <stdio.h>
#include <conio.h>

int main()
{
	float p,l,luas;
	printf("Program Menghitung Luas Persegi Panjang\n");
	printf("\n Masukan Panjang =");
	scanf("%f",&p);
	printf("\n Masukan Lebar   =");
	scanf("%f",&l);
	luas=p*l;
	printf("\n luas = %.2f\n",luas);
	getch();
}
