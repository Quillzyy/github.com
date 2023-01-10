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
void tatatertib();

int main(){

	//Perkenalan

	cout << "Proyek Elearning" << endl;
	cout << "Anggota: " << endl;
	cout << "- Abdurrahman Ammar Ihsan" << endl;
	cout << "- Cornelius Yuli Rosdianto" << endl;
	cout << "- Jonatan Victorian Wijaya" << endl;
	cout << "- Kevin Alonzo Manuel Bakara" << endl;
	cout << "- Muhammad Brian Azura Nixon" << endl;
	cout << "- Shaquille Arriza Hidayat" << endl << endl;
	cout << "Tekan apa saja untuk lanjut :)" << endl;
	getch();

	char salahLogin = 'y', salahMain = 'y', mulai = 'y';
	int pil, pil1;
	string NIM, Nama;

	//Login
	login :
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
	menu_utama:
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
			system("CLS");
			cout << "SELAMAT DATANG DI HALAMAN UJIAN" << endl;
			cout << "---------------------------------------------------" << endl;
			cout << "1. Ujian Tengah Semester" << endl;
			cout << "2. Ujian Akhir Semester" << endl;
			cout << "Pilihan Anda : ";
			cin >> pil1;

			switch(pil1) {
				
				case 1:
				system("CLS");
                cout << "\t\t\tUJIAN TENGAH SEMESTER" << endl;
				cout << "---------------------------------------------------------------------" << endl;
				cout << endl;
				tatatertib();
				cout << "Mulai ujian ? (y/n)";
				cin >> mulai;
				if (mulai=='y'){
					system("CLS");
                    cout << "1. Sebutkan dan jelaskan" << endl;
				}
				getch();
				goto menu_utama;
				break;

				case 2:
                system("CLS");
			    cout << "\t\t\tUJIAN AKHIR SEMESTER" << endl;
				cout << "---------------------------------------------------------------------" << endl;
				cout << endl;
				tatatertib();
				cout << "Mulai ujian ? (y/n)";
				cin >> mulai;
				if (mulai=='y'){}
				getch();
				goto menu_utama;
				break;

			}

			//Lihat Nilai
            case 3:
			cout << "NILAI ANDA" << endl;
			cout << "---------------------------------------------------" << endl;


			//Exit
			case 4:
			goto login;
			break;

		}

	break;
	} while(salahMain == 'y');
}

//Fungsi

void ammar(){
	system("CLS");
	cout << "PROFIL" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Nama \t\t: Abdurrahman Ammar Ihsan" << endl;
	cout << "NIM \t\t: 2207421047" << endl;
	cout << "Jurusan \t: Teknik Informatika dan Komputer" << endl;
	cout << "Program Studi \t: Teknik Multimedia dan Jaringan" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Tekan enter untuk kembali" << endl;
}

void cornelius(){
	system("CLS");
	cout << "PROFIL" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Nama \t\t: Corneius Yuli Rosdianto" << endl;
	cout << "NIM \t\t: 2207421059" << endl;
	cout << "Jurusan \t: Teknik Informatika dan Komputer" << endl;
	cout << "Program Studi \t: Teknik Multimedia dan Jaringan" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Tekan enter untuk kembali" << endl;
}

void kevin(){
	system("CLS");
	cout << "PROFIL" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Nama \t\t: Kevin Alonzo Manuel Bakara" << endl;
	cout << "NIM \t\t: 2207421032" << endl;
	cout << "Jurusan \t: Teknik Informatika dan Komputer" << endl;
	cout << "Program Studi \t: Teknik Multimedia dan Jaringan" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Tekan enter untuk kembali" << endl;
}

void shaquille(){
	system("CLS");
	cout << "PROFIL" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Nama \t\t: Shaquille Arriza Hidayat" << endl;
	cout << "NIM \t\t: 2207421057" << endl;
	cout << "Jurusan \t: Teknik Informatika dan Komputer" << endl;
	cout << "Program Studi \t: Teknik Multimedia dan Jaringan" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Tekan enter untuk kembali" << endl;
}

void brian(){
	system("CLS");
	cout << "PROFIL" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Nama \t\t: Muhammad Brian Azura Nixon" << endl;
	cout << "NIM \t\t: 2207421056" << endl;
	cout << "Jurusan \t: Teknik Informatika dan Komputer" << endl;
	cout << "Program Studi \t: Teknik Multimedia dan Jaringan" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Tekan enter untuk kembali" << endl;
}

void jovi(){
	system("CLS");
	cout << "PROFIL" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Nama \t\t: Jonatan Victorian Wijaya" << endl;
	cout << "NIM \t\t: 2207421051" << endl;
	cout << "Jurusan \t: Teknik Informatika dan Komputer" << endl;
	cout << "Program Studi \t: Teknik Multimedia dan Jaringan" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Tekan enter untuk kembali" << endl;
}

void tatatertib(){
	cout << "---------------------------- TATA TERTIB ----------------------------" << endl;
	cout << "1. Dilarang membuka handphone atau catatan selama ujian berlangsung" << endl;
	cout << "2. Dilarang melihat jawaban milik orang lain" << endl;
	cout << "3. Dilarang meninggalkan ruang ujian sebelum waktu berakhir" << endl;
	cout << "---------------------------------------------------------------------" << endl;
}