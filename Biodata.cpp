#include<iostream>
#include<conio.h>
using namespace std;

//Made by Kevin Alonzo Manuel Bakara_2207421032
//edit by kelompok saqil 

int main(){

	string NIM, NIK, nama, TTL, jurusan, prodi, alamat, alamat2, notel, tgl;
	string nm_ayah, nm_ibu, pk_ayah, pk_ibu, notel_ortu;
	char repeat;
do {

	cout<<"\t\tSELAMAT DATANG DI PROGRAM BIODATA"<<endl;
	cout<<"\t\t   SILAHKAN MASUKAN DATA ANDA"<<endl;
	cout<<"       -----------------------------------------------------"<<endl;
	
	
	cout<<"Masukan Tanggal Hari Ini \t\t: ";
	getline(cin,tgl);
	
	cout<<"Masukan Nama Lengkap \t\t\t: ";
	getline(cin,nama);
	
	cout<<"Masukan NIM \t\t\t\t: ";
	getline(cin,NIM);
	
	cout<<"Masukan NIK \t\t\t\t: ";
	getline(cin,NIK);
	
	cout<<"Masukan Tempat, Tanggal lahir \t\t: ";
	getline(cin,TTL);
	
	cout<<"Masukan Jurusan \t\t\t: ";
	getline(cin,jurusan);
	
	cout<<"Masukan Program Studi \t\t\t: ";
	getline(cin,prodi);
	
	cout<<"Masukan Alamat Rumah \t\t\t: ";
	getline(cin,alamat);
	
	cout<<"Masukan Nomor Telepon \t\t\t: ";
	getline(cin,notel);
	
	cout<<"Masukan Nama Ayah \t\t\t: ";
	getline(cin,nm_ayah);
	
	cout<<"Masukan Pekerjaan Ayah \t\t\t: ";
	getline(cin,pk_ayah);
	
	cout<<"Masukan Nama Ibu \t\t\t: ";
	getline(cin,nm_ibu);
	
	cout<<"Masukan Pekerjaan Ibu \t\t\t: ";
	getline(cin,pk_ibu);
	
	cout<<"Masukan Alamat Orang Tua \t\t: ";
	getline(cin,alamat2);
	
	cout<<"Masukan Nomor Telepon Orang Tua \t: ";
	getline(cin,notel_ortu);
	
	
	//CETAK BIODATA
	cout<<"\n\n\n"<<endl;
	cout<<"\t\t         BIODATA MAHASISWA"<<endl;
	cout<<"     ========================================================="<<endl;
	
	cout<<"Nama Lengkap \t\t\t: "<<nama<<endl;
	cout<<"NIM \t\t\t\t: "<<NIM<<endl;
	cout<<"NIK \t\t\t\t: "<<NIK<<endl;
	cout<<"Tempat, Tanggal Lahir \t\t: "<<TTL<<endl;
	cout<<"Jurusan \t\t\t: "<<jurusan<<endl;
	cout<<"Program Studi \t\t\t: "<<prodi<<endl;
	cout<<"Alamat Rumah \t\t\t: "<<alamat<<endl;
	cout<<"Nomor Telepon \t\t\t: "<<notel<<endl;
	cout<<"Nama Ayah \t\t\t: "<<nm_ayah<<endl;
	cout<<"Pekerjaan Ayah \t\t\t: "<<pk_ayah<<endl;
	cout<<"Nama Ibu \t\t\t: "<<nm_ibu<<endl;
	cout<<"Pekerjaan Ibu \t\t\t: "<<pk_ibu<<endl;
	cout<<"Alamat Orang Tua \t\t: "<<alamat2<<endl;
	cout<<"Nomor Telepon Orang Tua \t: "<<notel_ortu<<endl;
	
	cout<<"\n"<<endl;
	cout<<"\t\t\t\t\t\t A.n. "<<nama<<endl;;
	cout<<"\t\t\t\t\t\t "<<tgl<<endl;
	cout<<"\t\t\t\t\t\t yang bersangkutan, "<<endl;
		cout<<"\n"<<endl;
	cout<<"\t\t\t\t\t\t\t FOTO"<<endl;
		cout<<"\n"<<endl;
	cout<<"\t\t\t\t\t\t "<<nama<<endl;
	
	cout<<"Apakah anda ingin mengulang "; cin>>repeat;}

	while (repeat=='y');
	cout<<"Press any key to exit..";
	getch();
	return 0;
}