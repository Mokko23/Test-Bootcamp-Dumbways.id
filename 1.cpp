#include<iostream>
using namespace std;
int main(){
	
	int lahir;
	int jml = 9999;
	int waktu1 = 90;
	int waktu2 = 365;
	int waktu3 = waktu2/waktu1;
	float mati;
	
	cout<<"Jumlah awal kura - kura di penanggakaran : "<<jml<<" ekor"<<endl;
	cout<<"Setiap "<<waktu1<<" hari, kura-kura akan serempak melahirkan 1 kura-kura"<<endl;
	cout<<"Sebelum melahirkan, kura-kura akan mati sebanyak 21,1%"<<endl;
	cout<<endl;
	
	int i = 1;
		while(i <= waktu3){
			mati = jml*0.211;
			lahir = jml-mati;
			cout<<"Jumlah kura-kura sebelum kelahiran ke-"<<i<<" adalah "<<lahir<<" ekor"<<endl;
			jml = lahir*2;
			cout<<"Jumlah kura-kura setelah kelahiran ke-"<<i<<" adalah "<<jml<<" ekor"<<endl;
			cout<<endl;
			i++;
			cout<<"Jumlah kura-kura di penangkaran adalah "<<jml<<" ekor"<<endl;
			cout<<endl;
	}
		cout<<"Jumlah total kura-kura di penangkaran setelah 365 hari adalah "<<jml<<" ekor"<<endl;


return 0;
}
