#include<iostream>
using namespace std;
int bas_sayisi_bul(int sayi);
int ters_bul(int sayi,int basamak);
int main() {								// girilen sayinin tersinin toplamýný bulan program
	int sayi,basamak=1,kopya;
	int rakam = 0;
	int tersi=0;
	cout << "sayi giriniz:";
	cin >> sayi;
	cout << "sayinin tersi:"<< endl;
	basamak = bas_sayisi_bul(sayi);
	tersi=ters_bul(sayi,basamak);
	cout << "toplam("<<sayi<<"+"<<tersi<<")=" << kopya + tersi << endl;
	system("PAUSE");
	return 0;
}

int bas_sayisi_bul(int sayi){
	/* Kullanýmý
		basamak = bas_sayisi_bul(sayi);
	*/
	int basamak=1,rakam;
	while (sayi>0) {
		rakam = sayi % 10;
		sayi /= 10;
		basamak *= 10;
	}
	basamak /= 10;
	return basamak;
}

int ters_bul(int sayi,int basamak){
	/* Kullanýmý
		tersi=ters_bul(sayi,basamak);
	*/
	int rakam, yeni=0;
	while (sayi > 0) {
		rakam = sayi % 10;
		yeni += basamak * rakam;
		sayi /= 10;
		basamak /= 10;
	}
	return yeni;
}
