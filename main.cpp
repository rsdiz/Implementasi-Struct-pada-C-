#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;

char pil;

struct pegawai
{
	string nama_pegawai;
	string nip;
	string alamat;
	string no_hp;
	string no_rek;
};

struct tunjangan
{
	string jenis_tunjangan;
	int total_tunjangan;
};

struct potongan
{
	string jenis_potongan;
	int total_potongan;
};

pegawai getDataPegawai(pegawai data)
{
	cout << "> Masukkan NIP pegawai: ";
	cin  >> data.nip;
	cout << "> Masukkan nama pegawai: ";
	cin  >> data.nama_pegawai;
	cout << "> Masukkan alamat pegawai: ";
	cin  >> data.alamat;
	cout << "> Masukkan nomer hp pegawai: ";
	cin  >> data.no_hp;
	cout << "> Masukkan nomer rekening: ";
	cin  >> data.no_rek;
	cout << endl;

	return data;
}

void displayDataPegawai(pegawai data)
{
	cout << setw(5) << data.nip << setw(2) << "|";
	cout << setw(15) << data.nama_pegawai << setw(2) << "|";
	cout << setw(15) << data.alamat << setw(2) << "|";
	cout << setw(14) << data.no_hp << setw(2) << "|";
	cout << setw(13) << data.no_rek << setw(2) << "|";
	cout << endl;
}

tunjangan getDataTunjangan(tunjangan data)
{
	cout << "> Masukkan Nama Jenis tunjangan: ";
	cin >> data.jenis_tunjangan;
	cout << "> Masukkan Total tunjangan: ";
	cin >> data.total_tunjangan;
	cout << endl;

	return data;
}

void displayDataTunjangan(tunjangan data)
{
    cout << setw(12) << data.jenis_tunjangan << setw(8) << "|"
    	 << setw(15) << data.total_tunjangan << setw(5) << "|" << endl;

}

potongan getDataPotongan(potongan data)
{
	cout << "> Masukkan Nama Jenis potongan: ";
	cin >> data.jenis_potongan;
	cout << "> Masukkan Total potongan: ";
	cin >> data.total_potongan;
	cout << endl;

	return data;
}

void displayDataPotongan(potongan data)
{
    cout << setw (12) << data.jenis_potongan << setw(8) << "|"
    	 << setw (15) << data.total_potongan << setw(5) << "|" << endl;
}

void line1()
{
	cout << "+" << setfill('-')
		 << setw(5) << "+" 
		 << setw(7) << "+" 
		 << setw(17)<< "+" 
		 << setw(17)<< "+" 
		 << setw(16)<< "+" 
		 << setw(15)<< "+" 
		 <<endl;
	cout << setfill(' ');
}

void line2()
{
	cout << "+" << setfill('-')
		<< setw(5) << "+"
		<< setw(20) << "+"
		<< setw(20) << "+"
		<<endl;
	cout << setfill(' ');
}
void line3()
{ 
	cout << "+" << setfill('-')
		<< setw(5) << "+"
		<< setw(20) << "+"
		<< setw(20) << "+"
		<<endl;
	cout << setfill(' ');

}

void sukses(string txt){
	system("cls");
	cout << "### Data "<<txt<<" Berhasil di masukkan ###"<<endl;
	cout << " >  Lihat Data? (y/t) : "; cin >> pil;
}

void header(){
	cout << "+ - - - - - - - - - - - - - +" << endl
		 << "|" << setw(26) << " Sistem Penggajian Pegawai " << "|" << endl
		 << "+ - - - - - - - - - - - - - +" << endl;
}

void headInput(){
	cout << "+" << setfill('-') << setw(40) << "+"; cout << endl << setfill(' ');
}

int main()
{
	int total=0, pilihan1, pilihan2, maks=50;
	pegawai nama[maks];
	tunjangan jns_tjn[maks];
	potongan ttl_pot[maks];

	satu:
	system("cls");
	header();
	cout << "|" << setw(28) << "|" << endl
		 << "|" << setw(24) << " Menu yang tersedia :      " << "|" << endl
		 << "|" << setw(15) << " [1] Data Pegawai          " << "|" << endl
		 << "|" << setw(15) << " [2] Data Tunjangan        " << "|" << endl
		 << "|" << setw(15) << " [3] Data Potongan         " << "|" << endl
		 << "|" << setw(28) << "|" << endl
		 << "+ - - - - - - - - - - - - - +" << endl
		 << setw(25) << " Masukkan Pilihan (1/2/3): "; cin >> pilihan1;
	cout << " Jumlah data: "; cin >> total;


	// Jika Pilihan bukan 1/2/3 maka kembali ke satu
	if (pilihan1 != 1 && pilihan1 != 2 && pilihan1 != 3)
	{
		goto satu;
	}

	dua:
	system("cls");
	header();
	cout << "|" << setw(28) << "|" << endl
		 << "|" << setw(24) << " Menu yang tersedia :      " << "|" << endl
		 << "|" << setw(15) << " [1] Memasukkan Data       " << "|" << endl
		 << "|" << setw(15) << " [2] Melihat Data          " << "|" << endl
		 << "|" << setw(15) << " [3] Kembali               " << "|" << endl
		 << "|" << setw(15) << " [4] Keluar                " << "|" << endl
		 << "|" << setw(28) << "|" << endl
		 << "+ - - - - - - - - - - - - - +" << endl
		 << setw(20) << " Masukkan Pilihan: "; cin >> pilihan2;

	if (pilihan2 == 3)
	{
		pilihan1 = 0;
		goto satu;
	} else if (pilihan2 == 4)
	{
		goto end;
	} else if (pilihan2 != 1 && pilihan2 != 2)
	{
		goto dua;
	}

	system("cls");

	switch (pilihan1) {
		case 1:
				switch (pilihan2) {
					case 1:
						for (int i = 0; i < total; i++)
						{
							headInput();
							nama[i] = getDataPegawai(nama[i]);
						}
						sukses("Pegawai");
						if (pil == 't') goto dua;
						// break;
					case 2:
						line1();
						cout << "|" << setw(3) << "NO" << setw(2) << "|"
							 << setw(5) << "NIP" << setw(2) << "|"
							 << setw(13) << "Nama Pegawai" << setw(4) << "|"
							 << setw(12) << "Alamat" << setw(5) << "|"
							 << setw(11) << "Nomor HP" << setw(5) << "|"
							 << setw(13) << "Nomor Rek." << setw(2) << "|"
							 << endl;
						line1();
						for (int i = 0; i < total; i++)
						{
							cout << "|" << setw(3) << i+1 << setw(2) << "|";
							displayDataPegawai(nama[i]);
						}
						line1();
						getch();
						goto dua;
						break;
					default: { goto dua; }
				}
			break;
		case 2:
				switch (pilihan2) {
					case 1:
						for (int i = 0; i < total; i++)
						{
							headInput();
							jns_tjn[i] = getDataTunjangan(jns_tjn[i]);
						}
						sukses("Tunjangan");
						if (pil == 't') goto dua;
						// break;
					case 2:
						//header
						line2();
						cout << "|" << setw(3) << "NO" <<setw(2) << "|"
						<< setw(18) << "Jenis Tunjangan"<< setw(2) << "|"
						<< setw(18) << "Total Tunjangan"<< setw(2) << "|"
						<< endl;
						line2();
						for (int i = 0; i < total; i++)
						{
							cout << "|" << setw(3) << i+1 << setw(2) << "|";
							displayDataTunjangan(jns_tjn[i]);
						}
						line2();
						getch();
						goto dua;
						break;
					default: { goto dua; }
				}
			break;
		case 3:
				switch (pilihan2) {
					case 1:
						for (int i = 0; i < total; i++)
						{
							headInput();
							ttl_pot[i] = getDataPotongan(ttl_pot[i]);
						}
						sukses("Potongan");
						if (pil == 't') goto dua;
						// break;
					case 2:
						//header
						line3();
						cout << "|" << setw(3) << "NO" <<setw(2) << "|"
						<< setw(18) << "Jenis Potongan"<< setw(2) << "|"
						<< setw(18) << "Total potongan"<< setw(2) << "|"
						<< endl;
						line3();
						for (int i = 0; i < total; i++)
						{
							cout << "|" << setw(3) << i+1 << setw(2) << "|";
							displayDataPotongan(ttl_pot[i]);
						}
						line3();
						getch();
						goto dua;
						break;
					default: { goto dua; }
				}
			break;
		default:
			goto satu;
	}

	end:
		return 0;
}