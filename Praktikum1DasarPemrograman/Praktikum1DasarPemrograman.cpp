#include <iostream>
using namespace std;

int main()
{
	int nAlas, nTinggi;
	float nLuas;
	cout << "Masukkan Alasnya = ";
	cin >> nAlas;
	cout << "Masukkan Tingginya = ";
		cin >> nTinggi;
		nLuas = 0.5 * nAlas * nTinggi;
		cout << "Luas Segitiga Adalah " << nLuas << endl;
		
		//ini biar terminal tidak langsung close saat sistem di run
		system("pause");
}

//catatan Gibran :
//gunakna float jika range bilangan tidak terlalu panjang, float maksimal 7-8 digit
//gunakan double jika range nilangan panjang, double maksimal 15 digit