#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string nama;
	string alamat;
	int umur;
};


int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20220140133";
	mhs1.nama = "Daffa Putradika Pratama";
	mhs1.alamat = "Sangatta";
	mhs1.umur = 18;

	cout << "Masukan NIM : ";
	cin >> mhs2.NIM;
	cout << "Masukkan Nama : ";
	cin >> mhs2.nama;
	cout << "Masukkan Alamat : ";
	cin >> mhs2.alamat;
	cout << "Masukkan Umur : ";
	cin >> mhs2.umur;

	cout << "\nNim = " << mhs1.NIM;
	cout << "\nNama = " << mhs1.nama;
	cout << "\nAlamat = " << mhs1.alamat;
	cout << "\nUmur = " << mhs1.umur;

	cout << "\n\nNim = " << mhs2.NIM;
	cout << "\n\nNama = " << mhs2.nama;
	cout << "\n\nAlamat = " << mhs2.alamat;
	cout << "\n\nUmur = " << mhs2.umur;
}