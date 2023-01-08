#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

//Fungsinya ada di paling bawah, ini cuma deklarasi

void ammar();
void cornelius();
void kevin();
void shaquille();
void brian();
void jovi();

int main(){
	char salahLogin = 'y', salahMain = 'y';
	int pil;
	string NIM, Nama;

	//Login

	do{
		//cout<<"==========List NIM yang terdaftar========== \n";

		system("CLS");
		cout<<"LOGIN\n";
		cout<<"Masukan NIM: 2207421";
		cin>>NIM;

		if(NIM=="047"){
			Nama="Abdurrahman Ammar Ihsan";
			break;
		}
		else if (NIM=="059"){
			Nama="Cornelius Yuli Rosdianto";
			break;
		}
		else if (NIM=="032"){
			Nama="Kevin Alonzo Manuel Bakara";
			break;
		}
		else if (NIM=="057"){
			Nama="Shaquille Arriza Hidayat";
			break;
		}
		else if (NIM=="056"){
			Nama="Muhammad Brian Azura Nixon";
			break;
		}
		else if (NIM=="051"){
			Nama="Jonatan Victorian Wijaya";
			break;
		}
		else{
			cout<<"Maaf NIM tidak terdaftar \n";
			getch();
			system("CLS");
		}		
	} while (salahLogin =='y');

	//Main

	do{
		system("CLS");

		//Judul

		cout << "________________________________________" << endl;
		cout << "SELAMAT DATANG				|" << endl;
		cout << "Nama 	: " << Nama << "	|" << endl;
		cout << "NIM	: 2207421" << NIM <<"			|" << endl;
		cout << "Kelas	: TMJ 1B" << "			|" << endl;
		cout << "________________________________________|" << endl;
		cout << "1. Lihat Profil" << endl;
		cout << "2. Ujian" << endl;
		cout << "3. Lihat Nilai" << endl;
		cout << "4. Logout" << endl << endl;
		cout << "Pilihan Anda : ";
		cin >> pil;

		//Perpecahan Pilihan

		switch(pil){

			//Lihat Profil
			case 1:
			if(NIM=="047"){
				ammar();
				getch();
				system("CLS");
				continue;
			}
			else if (NIM=="059"){
				cornelius();
				getch();
				system("CLS");
				continue;
			}
			else if (NIM=="032"){
				kevin();
				getch();
				system("CLS");
				continue;
			}
			else if (NIM=="057"){
				shaquille();
				getch();
				system("CLS");
				continue;
			}
			else if (NIM=="056"){
				brian();
				getch();
				system("CLS");
				continue;
			}
			else if (NIM=="051"){
				jovi();
				getch();
				system("CLS");
				continue;
			}

			//Ujian
			case 2:
			

			//Exit
			case 4:
			break;

		}

	break;
	} while(salahMain == 'y');
}

//Fungsi

void ammar(){
	cout << "Abdurrahman Ammar Ihsan" << endl;
	cout << "2207421047" << endl;
	cout << "Teknik Informatika dan Komputer" << endl;
	cout << "Teknik Multimedia dan Jaringan" << endl;
}

void cornelius(){
	cout << "Corneius Yuli Rosdianto" << endl;
	cout << "2207421059" << endl;
	cout << "Teknik Informatika dan Komputer" << endl;
	cout << "Teknik Multimedia dan Jaringan" << endl;
}

void kevin(){
	cout << "Kevin Alonzo Manuel Bakara" << endl;
	cout << "2207421032" << endl;
	cout << "Teknik Informatika dan Komputer" << endl;
	cout << "Teknik Multimedia dan Jaringan" << endl;
}

void shaquille(){
	cout << "Shaquille Arriza Hidayat" << endl;
	cout << "2207421057" << endl;
	cout << "Teknik Informatika dan Komputer" << endl;
	cout << "Teknik Multimedia dan Jaringan" << endl;
}

void brian(){
	cout << "Muhammad Brian Azura Nixon" << endl;
	cout << "2207421056" << endl;
	cout << "Teknik Informatika dan Komputer" << endl;
	cout << "Teknik Multimedia dan Jaringan" << endl;
}

void jovi(){
	cout << "Jonatan Victorian Wijaya" << endl;
	cout << "2207421051" << endl;
	cout << "Teknik Informatika dan Komputer" << endl;
	cout << "Teknik Multimedia dan Jaringan" << endl;
}