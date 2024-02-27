#include <iostream>
using namespace std;

int main()
{	
	bool patokan = true;
	while (patokan)
	{
		int chocie;
		cout << "Pilih Ingin Mencari Luas Apa\n 1. Segitiga\n 2. Persegi Panjang\n 3. Exit\n Masukkan Input : ";
		cin >> chocie;
		if (chocie == 1)
		{
			float nAlas, nTinggi;
			float nLuas;
			cout << "Program Luas Segitiga\n";
			cout << "Masukkan Alasnya = ";
			cin >> nAlas;
			cout << "Masukkan Tingginya = ";
			cin >> nTinggi;
			nLuas = 0.5 * nAlas * nTinggi;
			cout << "Luas Segitiga Adalah " << nLuas << endl;
		}
		else if (chocie == 2) {
			int panjang, lebar, luas;
			cout << "Program Luas Persegi Panjang\n";
			cout << "Masukkan Panjang = ";
			cin >> panjang;
			cout << "masukkan Lebar = ";
			cin >> lebar;
			luas = panjang * lebar;

			cout << "Luasnya adalah = " << luas << endl;
		}
		else if (chocie == 3) {
			patokan = false;
		}
		else {
			cout << "input Anda salah" << endl;
		}
	}	
		//ini biar terminal tidak langsung close saat sistem di run
		system("pause");
}

//catatan Gibran :
//gunakna float jika range bilangan tidak terlalu panjang, float maksimal 7-8 digit
//gunakan double jika range nilangan panjang, double maksimal 15 digit