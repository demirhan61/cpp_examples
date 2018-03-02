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
	for(int i=1;i<=sayi;i++){
		if(sayi%i==0){
			adet++;
		}
	} 
	return adet;
}
