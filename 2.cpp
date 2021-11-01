#include <iostream>
using namespace std;

int main(){

    int nilai[16]={2, 24, 32, 22, 31, 100, 56, 21, 99, 7, 5, 37, 97, 25, 13, 11};
	int sort;

    for(int i = 0 ; i < 16; i++){
        cout<<"Nilai ke-"<<i<<" : "<<nilai[i]<<endl;
    }
    	for(int j = 1;j < 16;j++){
    		for(int k = 0;k < 16 - j;k++){
            	if(nilai[k] > nilai[k+1]){
            		
                	sort = nilai[k];
                	nilai[k] = nilai[k+1];
                	nilai[k+1] = sort;
            	}
        	}
		}
		
    cout << endl << "Hasil Pengurutan Adalah";
    for(int i = 0;i < 16;i++)
    {
        cout << " " << nilai[i];
    }
    cout << endl << endl;
    
    cout << "Pernyataan ganjil dan genap :" << endl;
    int l = 0;
    while(l < 16) {
        if(nilai[l] % 2 == 0) {
            cout << "Data " << nilai[l] << " termasuk bilangan genap";
            cout << endl;
        } else {
            cout << "Data " << nilai[l] << " termasuk bilangan ganjil";
            cout << endl;
        }
        l++;
    }

    return 0;
}
