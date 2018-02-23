#include<iostream>
using namespace std;
int main(){
	int sayi;
	cout<<"sayi giriniz:";
	cin>>sayi;
	for(int j=0;j<sayi;j++)
	{
		for(int i=0;i<sayi;i++)
		{	
			if(i!=j)
			{
				cout<<" ";
			}
			else
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
