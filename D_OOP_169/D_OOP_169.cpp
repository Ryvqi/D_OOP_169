#include <iostream>
using namespace std;

class Mahasiswa {
public:
	int nim;
	string nama;
	void tampil() {
		cout << "NIM = " << nim;
		cout << "\nNama = " << nama;
	}
};

class Matakuliah {
private:
	int sks;
	string kode;
	string namaMK;
public:
	void inputMK() {

		cout << "\nMasukan Jumlah SKS= ";
		cin >> sks;
		cout << "\nMasukan Kode MK= ";
		cin >> kode;
		cout << "\nMasukan Nama MK= ";
		cin >> namaMK;
	}

	void tampilMK() {
		cout << "\nJumlah sks= " << sks;
		cout << "\nKode MK= " << kode;
		cout << "\nNama MK= " << namaMK << endl;

	}
};

int main()
{
	Mahasiswa mhs;
	Matakuliah MK;

	cout << "Masukan NIM= ";
	cin >> mhs.nim;
	cout << "Masukan Nama= ";
	cin >> mhs.nama;

	MK.inputMK();
	MK.tampilMK();
	mhs.tampil();

}
