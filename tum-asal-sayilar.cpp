#include<iostream>
using namespace std;
int bolensayisi(int sayi){
/* Kullanımı

	int main(){
		int sayi,bs;
		cout<<"sayi giriniz:";
		cin>>sayi;
		bs=bolensayisi(sayi);
		cout<<"sayinin bolenlerinin sayisi:"<<bs<<endl;
		return 0;	
	}

*/	
	// buraya sayi değiskeninin bolen sayisini bulan kod
	int adet=0;
	for(int i=2;i<sayi;i++){
		if(sayi%i==0){
			adet++;
		}
	} 
	return adet;
}

int main(){
	int sayi,bs,toplam;
	cout<<"(ust deger) :\> ";
	cin>>sayi;
	for(int i=2;i<=sayi;i++){
		bs=bolensayisi(i);
		if(bs == 0){
			cout<<i<<" - ASAL"<<endl;
		}
		else{
			cout<<i<<" - ASAL DEGIL"<<endl;
		}
	}
	
	return 0;	
}
