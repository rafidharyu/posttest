#include "iostream"
using namespace std;

int main(){
	float harga_barang;
	
	cin >> harga_barang;
	
	cout << "Harga setelah diskon: " << harga_barang - (0.1*harga_barang) << endl;
	cout << "Diskon yang didapatkan: " << harga_barang - (0.9*harga_barang) << endl;
	
	return 0;
}
