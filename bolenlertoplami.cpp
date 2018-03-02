int bolenlertoplami(int sayi){
/* Kullanımı

	int main(){
		int sayi,toplam;
		cout<<"sayi giriniz:";
		cin>>sayi;
		toplam=bolenlertoplami(sayi);
		cout<<"sayinin bolenlerinin toplami:"<<toplam<<endl;
		return 0;	
	}

*/	
	
	int toplam=0,i;
	for(i=1;i<=sayi;i++){
		if(sayi%i==0){
			toplam=toplam+i;
		}
	}
	return toplam;
}
