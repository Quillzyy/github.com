#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

//Fungsinya ada di paling bawah, ini cuma deklarasi

void intro(string Nama, string NIM);
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

	char salahLogin = 'y', salahMain = 'y', mulai = 'y', a;
	int pil, pil1;
	string NIM, Nama;

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
		//cout<<"==========List NIM yang terdaftar========== \n";

		system("CLS");
		cout<<"     _______________" << endl;
		cout<<"    |               |" << endl;
		cout<<"    |     LOGIN     |\n";
		cout<<"    |_______________| \n" << endl;
		cout<<"Masukan NIM: 2207421";
		cin>>NIM;

		if(NIM=="047"){
			Nama="Abdurrahman Ammar Ihsan";
	
		} else if (NIM=="059"){
			Nama="Cornelius Yuli Rosdianto";
		
		} else if (NIM=="032"){
			Nama="Kevin Alonzo Manuel Bakara";
			
		} else if (NIM=="057"){
			Nama="Shaquille Arriza Hidayat";
		
		} else if (NIM=="056"){
			Nama="Muhammad Brian Azura Nixon";
		
		} else if (NIM=="051"){
			Nama="Jonatan Victorian Wijaya";
		} else{
			cout<<"Maaf NIM tidak terdaftar \n";
			getch();
			system("CLS");
			goto halaman_awal;
		}		

	//Main
	menu_utama:
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
			system ("CLS");
			intro(Nama, NIM);
			system ("CLS");
			goto menu_utama;  //setelah nampilih profil, pindah ke menu_utama
			break; 
			

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
			goto halaman_awal;
			break;

		}


	
}

//Fungsi

void intro (string Nama, string NIM) {  //fungsi untuk perkenalan
	cout << "PROFIL" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Nama \t\t: "<< Nama << endl;
	cout << "NIM \t\t: 2207421"<< NIM << endl;
	cout << "Jurusan \t: Teknik Informatika dan Komputer" << endl;
	cout << "Program Studi \t: Teknik Multimedia dan Jaringan" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "Tekan enter untuk kembali" << endl;
	getch();
}

void tatatertib(){
	cout << "---------------------------- TATA TERTIB ----------------------------" << endl;
	cout << "1. Dilarang membuka handphone atau catatan selama ujian berlangsung" << endl;
	cout << "2. Dilarang melihat jawaban milik orang lain" << endl;
	cout << "3. Dilarang meninggalkan ruang ujian sebelum waktu berakhir" << endl;
	cout << "---------------------------------------------------------------------" << endl;
}
