#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

//Fungsinya ada di paling bawah, ini cuma deklarasi
void ujian_uts(int nilai_uts, char satu);
void ammar();
void cornelius();
void kevin();
void shaquille();
void brian();
void jovi();
void tatatertib();

int main(){

	//Perkenalan
	perkenalan : 
	system ("CLS");
	cout << "Proyek Program Elearning" << endl;
	cout << "Anggota: " << endl;
	cout << "- Abdurrahman Ammar Ihsan		(047)" << endl;
	cout << "- Cornelius Yuli Rosdianto		(059)" << endl;
	cout << "- Jonatan Victorian Wijaya		(051)" << endl;
	cout << "- Kevin Alonzo Manuel Bakara		(032)" << endl;
	cout << "- Muhammad Brian Azura Nixon		(056)" << endl;
	cout << "- Shaquille Arriza Hidayat		(057)" << endl << endl;
	cout << "*diperlukan menginput NIM anggota agar bisa masuk"<<endl;
	cout << " ke dalam program. Tolong ingat salah satu NIM anggota"<<endl;
	cout << "Tekan apa saja untuk lanjut :)" << endl;
	getch();

	char salahLogin = 'y', salahMain = 'y', mulai = 'y', a, satu;
	int pil, pil1, nilai_uts, nilai_uas;
	string NIM, Nama;
	nilai_uts = 0; nilai_uas=0;  
	halaman_awal : 
	system ("CLS");
	cout << "Selamat datang di tampilan awal Projek Eleaning ini"<<endl;
	cout << "Silahkan pilih apa yang apa yang ingin anda lakukan"<<endl;
	cout << "a. Login "<<endl;
	cout << "b. Kembali ke bagian sebelumnya "<<endl;
	cout << "c. Keluar Program "<<endl;
	cout << "Pilihan anda : "; cin>>a;
	
	if(a=='a') { goto login; }
	else if (a=='b') {goto perkenalan; }
	else if (a=='c') { cout << "Terima kasih sudah berkunjung..."; 
						getch(); return 0; }
	else {goto halaman_awal; }


	//Login
	login :
	do{
		//cout<<"==========List NIM yang terdaftar========== \n";

		system("CLS");
		cout<<"      _____________" << endl;
		cout<<"     |             |" << endl;
		cout<<"     |    LOGIN    |\n";
		cout<<"     |_____________| \n" << endl;
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
		cout << "	SELAMAT DATANG			|" << endl;
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
                    ujian_uts(nilai_uts, satu);
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
			cout << "==================================================="<<endl;
			cout << "NILAI ANDA" << endl;
			cout << "---------------------------------------------------" << endl;

				if (nilai_uts <= 0) {cout << "Anda belum pernal mengerjakan ujian apapun "<<endl;}
				else {cout << "Nilai UTS : "<<nilai_uts; }
			 
			getch(); goto menu_utama;


			//Exit
			case 4:
			goto halaman_awal;
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

void ujian_uts (int nilai_uts, char satu){
	nilai_uts = 0;
	cout<<"1. Pada c++, perintah 'cin' digunakan untuk..."<<endl;
	cout<<"   a. Menginput           b. menampilkan"<<endl;
	cout<<"Jawaban anda : "; cin>>satu;
		if (satu=='a') { nilai_uts += 20;  }
	cout<<endl;

	cout<<"2. Pada c++, perintah 'cout' digunakan untuk..."<<endl;
	cout<<"   a. Menampilkan          b. menginput"<<endl;
	cout<<"Jawaban anda : "; cin>>satu; 
		if (satu=='a') { nilai_uts += 20; }
	cout<<endl;

	cout<<"3. Pada c++, 'int' merupakan tipe data..."<<endl;
	cout<<"   a. angka                b. huruf"<<endl;
	cout<<"Jawaban anda : "; cin>>satu;
		if (satu=='a') { nilai_uts += 20;}
	cout<<endl;

	cout<<"4. Pada c++, 'float' merupakan tipe data..."<<endl;
	cout<<"   a. angka desimal        b. angka"<<endl;
	cout<<"Jawaban anda : "; cin>>satu;
		if (satu=='a') { nilai_uts += 20; }
	cout<<endl;

	cout<<"5. Pada c++, 'bool' merupakan tipe data..."<<endl;
	cout<<"   a. true or false        b. 1 huruf/angka"<<endl;
	cout<<"Jawaban anda : "; cin>>satu;
		if (satu=='a') { nilai_uts += 20;}
	cout<<endl;

	cout<<"Ujian anda telah selesai \n"<<endl; 
	cout<<"Nilai anda : "<<nilai_uts<<endl; 
	getch();
}
