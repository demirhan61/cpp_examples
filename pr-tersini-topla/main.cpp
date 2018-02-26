#include<iostream>
using namespace std;
int main(){								// girilen sayinin tersinin toplamýný bulan program
    int sayi;
    int yazilacakrakam=0;
    int toplam=0;
    cout<<"sayi giriniz:";
    cin>>sayi;
    cout<<"sayinin tersi:";
    cout<<endl;
    while(sayi>10){
        yazilacakrakam=sayi%10;
        toplam=toplam+yazilacakrakam;
        cout<<"yazilacakrakam:"<<yazilacakrakam<<endl;
        sayi/=10;
    }
    cout<<"toplam:"<<toplam<<endl;
	return 0;
}
