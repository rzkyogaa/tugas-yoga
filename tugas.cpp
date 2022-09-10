
// Bagian deklarasi include yang menggunakan library iostream
#include <iostream>
// Bagian deklarasi namespace
using namespace std;
// Deklarasi function
int main()
{
	// Deklarasi untuk Variabel Jam dan Variabel Tarif
	int Jam, Tarif;

    // Tampilan untuk judul
	cout << "---Rental Alat Musik---" << endl;
	cout << "Selamat datang di rental alat musik" << endl;
	cout << "Rental 1-10 Jam" << endl;
	cout << endl;
	
	// Tampilan untuk menginput waktu rental
	cout << "Masukan Jam Rental: "; 
	cin >> Jam;
	
	// Jika waktu rental lebih dari 10 maka tidak bisa
	if(Jam >=11){
		cout <<"Maaf Tidak Bisa";
		cout << endl;
	}
	// Lain jika waktu rental kurang dari 10
	else if(Jam){
			Tarif =Jam * 100000 - (50000 * (Jam - 1));
	        cout << "Tarif Rental anda adalah: " <<Tarif << endl;
 	        cout << endl;
	}
    // Tampilan Akhir
	cout << "Terima Kasih, Sudah Merental Alat Musik!" << endl;
	
	 return 0;
	 
}
