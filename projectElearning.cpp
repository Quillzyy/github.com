#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

//Fungsinya ada di paling bawah, ini cuma deklarasi

int UTS();
int UAS();
void ammar();
void cornelius();
void kevin();
void shaquille();
void brian();
void jovi();
void tatatertib();

int main(){

	system("CLS");

	//Perkenalan
	login :
	system ("CLS");
	cout << "Proyek Program Elearning" << endl;
	cout << "Anggota: " << endl;
	cout << "- Abdurrahman Ammar Ihsan		(047)" << endl;
	cout << "- Cornelius Yuli Rosdianto		(059)" << endl;
	cout << "- Jonatan Victorian Wijaya		(051)" << endl;
	cout << "- Kevin Alonzo Manuel Bakara		(032)" << endl;
	cout << "- Muhammad Brian Azura Nixon		(056)" << endl;
	cout << "- Shaquille Arriza Hidayat		(057)" << endl << endl;
	cout << "Tekan apa saja untuk lanjut :)" << endl;
	getch();

	int UTSAmar = 0, UTSCornet = 0, UTSKepin = 0, UTSSaqil = 0, UTSBrain = 0, UTSJopi = 0;
	int UASAmar = 0, UASCornet = 0, UASKepin = 0, UASSaqil = 0, UASBrain = 0, UASJopi = 0;
	char salahLogin = 'y', salahMain = 'y', mulai = 'y';
	int pil, pil1;
	string NIM, Nama;

	//Login
	
	do{
		//cout<<"==========List NIM yang terdaftar========== \n";

		system("CLS");
		cout<<"        _______" << endl;
		cout<<"       |       |" << endl;
		cout<<"       | LOGIN |\n";
		cout<<"       |_______| \n" << endl;
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
				
				//Ujian Ril
				case 1:
				system("CLS");
                cout << "\t\t\tUJIAN TENGAH SEMESTER" << endl;
				cout << "---------------------------------------------------------------------" << endl;
				cout << endl;
				tatatertib();
				cout << "Mulai ujian ? (y/n) : ";
				cin >> mulai;
				if (mulai=='y'){
					if(NIM=="047"){
						UTSAmar = UTS();
					}
					else if (NIM=="059"){
						UTSCornet = UTS();
					}
					else if (NIM=="032"){
						UTSKepin = UTS();
					}
					else if (NIM=="057"){
						UTSSaqil = UTS();
					}
					else if (NIM=="056"){
						UTSBrain = UTS();
					}
					else if (NIM=="051"){
						UTSJopi = UTS();
					}
				}
				else{
					goto menu_utama;
				}

				getch();
				continue;

				case 2:
                system("CLS");
			    cout << "\t\t\tUJIAN AKHIR SEMESTER" << endl;
				cout << "---------------------------------------------------------------------" << endl;
				cout << endl;
				tatatertib();
				cout << "Mulai ujian ? (y/n)";
				cin >> mulai;
				if (mulai=='y'){
					if(NIM=="047"){
						UASAmar = UAS();
					}
					else if (NIM=="059"){
						UASCornet = UAS();
					}
					else if (NIM=="032"){
						UASKepin = UAS();
					}
					else if (NIM=="057"){
						UASSaqil = UAS();
					}
					else if (NIM=="056"){
						UASBrain = UAS();
					}
					else if (NIM=="051"){
						UASJopi = UAS();
					}
				}
				else{
					goto menu_utama;
				}

				getch();
				continue;

				default:
				continue;
			}

			//Lihat Nilai
            case 3:
			system("CLS");
			cout << "NILAI ANDA" << endl;
			cout << "---------------------------------------------------" << endl;
			if(NIM=="047"){
				cout << "Nilai UTS anda : " << UTSAmar << endl;
				cout << "Nilai UAS anda : " << UASAmar << endl;
			}
			else if (NIM=="059"){
				cout << "Nilai UTS anda : " << UTSCornet << endl;
				cout << "Nilai UAS anda : " << UASCornet << endl;
			}
			else if (NIM=="032"){
				cout << "Nilai UTS anda : " << UTSKepin << endl;
				cout << "Nilai UAS anda : " << UASKepin << endl;
			}
			else if (NIM=="057"){
				cout << "Nilai UTS anda : " << UTSSaqil << endl;
				cout << "Nilai UAS anda : " << UASSaqil << endl;
			}
			else if (NIM=="056"){
				cout << "Nilai UTS anda : " << UTSBrain << endl;
				cout << "Nilai UAS anda : " << UASBrain << endl;
			}
			else if (NIM=="051"){
				cout << "Nilai UTS anda : " << UTSJopi << endl;
				cout << "Nilai UAS anda : " << UASJopi << endl;
			}
			getch();
			continue;

			//Exit
			case 4:
			goto login;
			break;

			default:
			continue;

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

int UTS(){
	int nilai = 0;
	string jawaban;
	
	//Soal dan Jawaban UTS
	do{
		system("CLS");
		cout << "1. Pada c++, perintah 'cin' digunakan untuk..." << endl;
		cout << "a. Menginput " << endl;
		cout << "b. Menampilkan " << endl;
		cout << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "a" || jawaban == "A"){
			nilai += 20;
			break;
		}
		else if(jawaban == "b" || jawaban == "B"){
			nilai = nilai;
			break;
		}
		else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "2. Pada c++, perintah 'cout' digunakan untuk..." << endl;
		cout << "a. Menginput " << endl;
		cout << "b. Menampilkan " << endl;
		cout << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "b" || jawaban == "B"){
			nilai += 20;
			break;
		}
		else if(jawaban == "a" || jawaban == "A"){
			nilai = nilai;
			break;
		}
		else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "3. Pada c++, 'int' merupakan tipe data..." << endl;
		cout << "a. angka " << endl;
		cout << "b. huruf " << endl;
		cout << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "a" || jawaban == "A"){
			nilai += 20;
			break;
		}
		else if(jawaban == "b" || jawaban == "B"){
			nilai = nilai;
			break;
		}
		else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "4. Pada c++, 'float' merupakan tipe data..." << endl;
		cout << "a. angka" << endl;
		cout << "b. angka desimal" << endl;
		cout << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "b" || jawaban == "B"){
			nilai += 20;
			break;
		}
		else if(jawaban == "a" || jawaban == "A"){
			nilai = nilai;
			break;
		}
		else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "5. Pada c++, 'bool' merupakan tipe data..." << endl;
		cout << "a. true or false " << endl;
		cout << "b. 1 huruf/angka " << endl;
		cout << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "a" || jawaban == "A"){
			nilai += 20;
			break;
		}
		else if(jawaban == "b" || jawaban == "B"){
			nilai = nilai;
			break;
		}
		else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	cout << "Selamat telah menyelesaikan tes \\(^o^)/" << endl;
	return nilai;
}

int UAS(){
	cout << "======================================" << endl;
	cout << "Jangan lupa berdoa sebelum mengerjakan" << endl;
	cout << "======================================" << endl;
	cout << "Press any key to continue...";
	getch();

	int nilai = 0;
	string jawaban;
	
	//Soal dan Jawaban UAS
	do{
		system("CLS");
		cout << "1. Berikut ini adalah operator increment dan decrement" << endl;
		cout << "a. ++ dan -- " << endl;
		cout << "b. ++ dan ** " << endl;
		cout << "c. || dan && " << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "a" || jawaban == "A"){
			nilai += 20;
			break;
		}
		else if(jawaban == "b" || jawaban == "B" || jawaban == "c" || jawaban == "C"){
			nilai = nilai;
			break;
		}
		else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "2. Untuk mendeklarasikan array di C++ di tandai dengan tanda?" << endl;
		cout << "a. {} " << endl;
		cout << "b. || " << endl;
		cout << "c. []" << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "c" || jawaban == "C"){
			nilai += 20;
			break;
		}
		else if(jawaban == "b" || jawaban == "B" || jawaban == "a" || jawaban == "A"){
			nilai = nilai;
			break;
		}
		else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "3.  Berikut bentuk umum penulisan pernyataan if yang benar yaitu" << endl;
		cout << "a. if (x > y); " << endl;
		cout << "b. if x > y then: " << endl;
		cout << "c. if (x > y) then: " << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "a" || jawaban == "A"){
			nilai += 20;
			break;
		}
		else if(jawaban == "b" || jawaban == "B" || jawaban == "c" || jawaban == "C"){
			nilai = nilai;
			break;
		}
		else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "4. Dalam menyusun suatu program, langkahpertama yang harus dilakukan adalah.." << endl;
		cout << "a. Membuat Algoritma " << endl;
		cout << "b. Langsung Membuat Kode Program " << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "a" || jawaban == "A"){
			nilai += 20;
			break;
		}
		else if(jawaban == "b" || jawaban == "B"){
			nilai = nilai;
			break;
		}
		else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "5. Berikut ini yang bukan termasuk metode pengurutan data pada elemen array..." << endl;
		cout << "a. Distance Sort " << endl;
		cout << "b. Bubble Sort " << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "b" || jawaban == "B"){
			nilai += 20;
			break;
		}
		else if(jawaban == "a" || jawaban == "A"){
			nilai = nilai;
			break;
		}
		else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	cout << "Selamat telah menyelesaikan tes \\(^o^)/" << endl;
	return nilai;
}
