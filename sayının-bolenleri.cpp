#include<iostream>
using namespace std;						//girilen sayýnýn bolenlerini bolenlerinin toplamýný ve bolenlerinin adetini bulma
int main(){
int sayi,i;
int toplam=0;
int adet=0;
cout<<"sayi giriniz:";
cin>>sayi;
cout<<"Bolenleri:";
for(i=2;i<sayi;i++)
	{
 		if(sayi%i==0)
	 {		
	 		toplam=toplam+i;
	 		adet++;
 			cout<<i<<endl;
 			
	 }

	}
	 cout<<"toplam:"<<toplam<<endl;
	 cout<<"adet:"<<adet<<endl;	
	
	
}
