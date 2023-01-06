#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

string NIM, Nama;

void ammar(){
	cout << Nama << endl;
	cout << 
}

int main(){
	do{
		char salah;


		//cout<<"==========List NIM yang terdaftar========== \n";

		cout<<"LOGIN\n";

		cout<<"Masukan NIM: 2207421";
		cin>>NIM;


		if(NIM=="047"){
			Nama="Abdurrahman Ammar Ihsan";
			salah=='n';
		}
		else{
			cout<<"Maaf NIM tidak terdaftar \n";
			salah='y';
			getch();	
		}
			
		system("CLS");
	} while (salah=='y');

	do{
		int pilihan;
		char salah;
		cout <<"SELAMAT DATANG"<<endl;
		cout <<"Nama 	: "<< Nama <<"\t |\n";
		cout <<"NIM	: 2207421"<< NIM <<"\t\t\t |\n";
		cout <<"Kelas	: TMJ 1B"<< "\t\t\t |\n";
		cout << "_________________________________________|" << endl;
		cout << "1. Lihat Profil" << endl;
		cout << "2. Ujian" << endl;
		cout << "3. Lihat Nilai" << endl;
		cout << "4. Logout" << endl;
		cout << "Masukkan Pilihan : ";

		cin >> pilihan;

		switch(pilihan){
			case 1:
			if(NIM=="047"){
				ammar();
			}

		}

	} while (salah == "y")
}
