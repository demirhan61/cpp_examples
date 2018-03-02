int bolensayisi(int sayi){
	// buraya sayi değiskeninin bolen sayisini bulan kod
	int adet=0;
	for(int i=1;i<=sayi;i++){
		if(sayi%i==0){
			adet++;
		}
	} 
	return adet;
}
