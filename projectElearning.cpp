#include<iostream>
#include<conio.h>
using namespace std;

//Fungsinya ada di paling bawah, ini cuma deklarasi

int UTS();
int UAS();
void intro(string Nama, string NIM);
void tatatertib();

int main(){

	system("CLS");

	//Perkenalan
	perkenalan :
	system ("CLS");
	cout << "	  PROYEK PROGRAM E-LEARNING" << endl;
	cout << "=============================================" << endl;
	cout << "Anggota: " << endl;
	cout << "- Abdurrahman Ammar Ihsan		(047)" << endl;
	cout << "- Cornelius Yuli Rosdianto		(059)" << endl;
	cout << "- Jonatan Victorian Wijaya		(051)" << endl;
	cout << "- Kevin Alonzo Manuel Bakara		(032)" << endl;
	cout << "- Muhammad Brian Azura Nixon		(056)" << endl;
	cout << "- Shaquille Arriza Hidayat		(057)" << endl<<endl;
	cout << "*diperlukan menginput NIM anggota agar bisa masuk"<<endl;
	cout << " ke dalam program. Tolong ingat salah satu NIM anggota"<<endl  << endl;
	cout << "Tekan apa saja untuk lanjut :)" << endl;
	getch();

	int UTSAmar = 0, UTSCornet = 0, UTSKepin = 0, UTSSaqil = 0, UTSBrain = 0, UTSJopi = 0;
	int UASAmar = 0, UASCornet = 0, UASKepin = 0, UASSaqil = 0, UASBrain = 0, UASJopi = 0;
	char mulai;
	char pil, pil1;
	string NIM, Nama;

	halaman_awal : 
	{
		char awal;
		system ("CLS");
		cout << "Selamat datang di tampilan awal Projek Elearning ini"<<endl;
		cout << "Silahkan pilih apa yang apa yang ingin anda lakukan"<<endl;
		cout << "[a] Login "<<endl;
		cout << "[b] Kembali ke bagian sebelumnya "<<endl;
		cout << "[c] Keluar Program "<<endl;
		cout << "Pilihan anda : "; cin>>awal;
		
		if(awal=='a') { goto login; 
		} else if (awal=='b') {goto perkenalan; 
		} else if (awal=='c') { 
					cout <<endl<<"Terima kasih sudah berkunjung..."<<endl; 
					getch(); 
					cout <<"________________________________";
					return 0; 
		} else {goto halaman_awal; }
	}

	//Login
	login :
	do{
		//cout<<"==========List NIM yang terdaftar========== \n";

		system("CLS");
		cout<<"     _______________" << endl;
		cout<<"    |               |" << endl;
		cout<<"    |     LOGIN     |\n";
		cout<<"    |_______________| \n" << endl;
		cout<<"Masukan NIM: 2207421";
		cin>>NIM;

		if(NIM=="032"){
			Nama="Kevin Alonzo Manuel Bakara";
			break;
		} else if (NIM=="047"){
			Nama="Abdurrahman Ammar Ihsan";
			break;
		} else if (NIM=="051"){
			Nama="Jonatan Victorian Wijaya";
			break;
		} else if (NIM=="056"){	
			Nama="Muhammad Brian Azura Nixon";
			break;
		} else if (NIM=="057"){
			Nama="Shaquille Arriza Hidayat";
			break;
		} else if (NIM=="059"){
			Nama="Cornelius Yuli Rosdianto";
			break;
		} else{
			cout<<"Maaf NIM dengan akhiran '" << NIM << "' tidak terdaftar \n";
			cout << "*Ketik enter untuk kembali ke halaman awal" << endl; getch();
			goto halaman_awal;
			system("CLS");
		}
		 		
	} while (true);

	//Main
	menu_utama:
	do{
		system("CLS");

		//Judul
		cout << "________________________________________" << endl;
		cout << "	   SELAMAT DATANG		|" << endl;
		cout << "Nama 	: " << Nama << "	|" << endl;
		cout << "NIM	: 2207421" << NIM <<"			|" << endl;
		cout << "Kelas	: TMJ 1B" << "			|" << endl;
		cout << "________________________________________|" << endl;
		cout << "[1] Lihat Profil" << endl;
		cout << "[2] Ujian" << endl;
		cout << "[3] Lihat Nilai" << endl;
		cout << "[4] Logout" << endl << endl;
		cout << "Pilihan Anda : ";
		cin >> pil;

		//Perpecahan Pilihan
		switch(pil){

			//Lihat Profil
			case '1':
			system ("CLS");
			intro(Nama, NIM);
			system ("CLS");
			continue;
			//setelah nampilin profil, pindah ke menu_utama

			//Ujian
			case '2':
			system("CLS");
			cout << "\t  SELAMAT DATANG DI HALAMAN UJIAN" << endl;
			cout << "---------------------------------------------------" << endl;
			cout << "[1] Ujian Tengah Semester" << endl;
			cout << "[2] Ujian Akhir Semester" << endl;
			cout << "[3] Kembali ke menu utama" << endl;
			cout << "Pilihan Anda : ";
			cin >> pil1;

			switch(pil1) {
				
				//Ujian Ril
				case '1':
				system("CLS");
                cout << "\t\t\tUJIAN TENGAH SEMESTER" << endl;
				cout << "---------------------------------------------------------------------" << endl;
				cout << endl;
				tatatertib();
				cout << "Mulai ujian ? (y/n) : ";
				cin >> mulai;
				if (mulai=='y' || mulai=='Y'){
					if(NIM=="047"){
						UTSAmar = UTS();
					} else if (NIM=="059"){
						UTSCornet = UTS();
					} else if (NIM=="032"){
						UTSKepin = UTS();
					} else if (NIM=="057"){
						UTSSaqil = UTS();
					} else if (NIM=="056"){
						UTSBrain = UTS();
					} else if (NIM=="051"){
						UTSJopi = UTS();
					}
				} else{
					goto menu_utama;
				}

				getch(); continue;

				case '2':
                system("CLS");
			    cout << "\t\t\tUJIAN AKHIR SEMESTER" << endl;
				cout << "---------------------------------------------------------------------" << endl;
				cout << endl;
				tatatertib();
				cout << "Mulai ujian ? (y/n) : ";
				cin >> mulai;
				if (mulai=='y' || mulai=='Y'){
					if(NIM=="047"){
						UASAmar = UAS();
					} else if (NIM=="059"){
						UASCornet = UAS();
					} else if (NIM=="032"){
						UASKepin = UAS();
					} else if (NIM=="057"){
						UASSaqil = UAS();
					} else if (NIM=="056"){
						UASBrain = UAS();
					} else if (NIM=="051"){
						UASJopi = UAS();
					}

				} else{
					goto menu_utama;
				}

				getch(); continue;

				case 3:
				goto menu_utama;

				getch();
				continue;

				default:
				continue;
			}

			//Lihat Nilai
            case '3':
			system("CLS");
			cout << "\t ______________________" << endl;
			cout << "\t|                      |" << endl;
			cout << "\t|      NILAI ANDA      |" << endl;
			cout << "\t|______________________|" << endl << endl;
			if(NIM=="047"){
				cout << "Nilai UTS anda : " << UTSAmar << endl;
				cout << "Nilai UAS anda : " << UASAmar << endl;
				cout << "*Tekan enter untuk kembali ke halaman awal" << endl;
			} else if (NIM=="059"){
				cout << "Nilai UTS anda : " << UTSCornet << endl;
				cout << "Nilai UAS anda : " << UASCornet << endl;
				cout << "*Tekan enter untuk kembali ke halaman awal" << endl;
			} else if (NIM=="032"){
				cout << "Nilai UTS anda : " << UTSKepin << endl;
				cout << "Nilai UAS anda : " << UASKepin << endl;
				cout << "*Tekan enter untuk kembali ke halaman awal" << endl;
			} else if (NIM=="057"){
				cout << "Nilai UTS anda : " << UTSSaqil << endl;
				cout << "Nilai UAS anda : " << UASSaqil << endl;
				cout << "*Tekan enter untuk kembali ke halaman awal" << endl;
			} else if (NIM=="056"){
				cout << "Nilai UTS anda : " << UTSBrain << endl;
				cout << "Nilai UAS anda : " << UASBrain << endl;
				cout << "*Tekan enter untuk kembali ke halaman awal" << endl;
			} else if (NIM=="051"){
				cout << "Nilai UTS anda : " << UTSJopi << endl;
				cout << "Nilai UAS anda : " << UASJopi << endl;
				cout << "*Tekan enter untuk kembali ke halaman awal" << endl;
			} 
			
			getch(); continue;

			//Exit
			case '4':
			goto halaman_awal;
			break;

			default:
			continue;

		}

	break;
	} while(true);
}

//Fungsi

void intro (string Nama, string NIM) {  //fungsi untuk perkenalan
	cout << "\t\tPROFIL" << endl;
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
	cout << "--------------------------- TATA TERTIB -----------------------------" << endl;
	cout << "1. Dilarang membuka handphone atau catatan selama ujian berlangsung" << endl;
	cout << "2. Dilarang melihat jawaban milik orang lain" << endl;
	cout << "3. Dilarang meninggalkan ruang ujian sebelum waktu berakhir" << endl;
	cout << "----------------------------------------------------------------------" << endl;
}

int UTS(){
	cout << endl;
	cout << "======================================" << endl;
	cout << "Jangan lupa berdoa sebelum mengerjakan" << endl;
	cout << "======================================" << endl;
	getch();

	int nilai = 0;
	string jawaban;
	
	//Soal dan Jawaban UTS
	do{
		system("CLS");
		cout << "1. Pada C++, perintah 'cin' digunakan untuk..." << endl;
		cout << "a. Mengulang" << endl;
		cout << "b. Menampilkan" << endl;
		cout << "c. Menginput" << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "c" || jawaban == "C"){
			nilai += 20;
			break;

		} else if(jawaban == "b" || jawaban == "B" || jawaban == "a" || jawaban == "A"){
			nilai = nilai;
			break;

		} else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "2. Pada C++, perintah 'cout' digunakan untuk..." << endl;
		cout << "a. Mengulang" << endl;
		cout << "b. Menampilkan" << endl;
		cout << "c. Menginput" << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "b" || jawaban == "B"){
			nilai += 20;
			break;

		} else if(jawaban == "a" || jawaban == "A" || jawaban == "c" || jawaban == "C"){
			nilai = nilai;
			break;

		} else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "3. Pada C++, 'int' merupakan tipe data..." << endl;
		cout << "a. Logika" << endl;
		cout << "b. Huruf" << endl;
		cout << "c. Angka" << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "c" || jawaban == "C"){
			nilai += 20;
			break;

		} else if(jawaban == "b" || jawaban == "B" || jawaban == "a" || jawaban == "A"){
			nilai = nilai;
			break;

		} else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "4. Pada C++, 'float' merupakan tipe data..." << endl;
		cout << "a. Bilangan bulat" << endl;
		cout << "b. Bilangan desimal" << endl;
		cout << "c. Bilangan irasional" << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "b" || jawaban == "B"){
			nilai += 20;
			break;

		} else if(jawaban == "a" || jawaban == "A" || jawaban == "c" || jawaban == "C"){
			nilai = nilai;
			break;

		} else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "5. Pada C++, 'bool' merupakan tipe data..." << endl;
		cout << "a. Logika" << endl;
		cout << "b. Huruf" << endl;
		cout << "c. Angka" << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "a" || jawaban == "A"){
			nilai += 20;
			break;

		} else if(jawaban == "b" || jawaban == "B" || jawaban == "c" || jawaban == "C"){
			nilai = nilai;
			break;

		} else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	cout << "Selamat anda telah menyelesaikan tes \\(^o^)/" << endl;
	return nilai;
}

int UAS(){
	cout << endl;
	cout << "======================================" << endl;
	cout << "Jangan lupa berdoa sebelum mengerjakan" << endl;
	cout << "======================================" << endl;
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

		} else if(jawaban == "b" || jawaban == "B" || jawaban == "c" || jawaban == "C"){
			nilai = nilai;
			break;

		} else{
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

		} else if(jawaban == "b" || jawaban == "B" || jawaban == "a" || jawaban == "A"){
			nilai = nilai;
			break;

		} else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "3. Berikut bentuk umum penulisan pernyataan 'if' yang benar yaitu..." << endl;
		cout << "a. if (x > y); " << endl;
		cout << "b. if x > y then: " << endl;
		cout << "c. if (x > y) then: " << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "a" || jawaban == "A"){
			nilai += 20;
			break;

		} else if(jawaban == "b" || jawaban == "B" || jawaban == "c" || jawaban == "C"){
			nilai = nilai;
			break;

		} else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "4. Dalam menyusun suatu program, langkah pertama yang harus dilakukan adalah.." << endl;
		cout << "a. Membuat Algoritma Flowchart" << endl;
		cout << "b. Langsung Membuat Kode Program " << endl << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "a" || jawaban == "A"){
			nilai += 20;
			break;

		} else if(jawaban == "b" || jawaban == "B"){
			nilai = nilai;
			break;

		} else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	do{
		system("CLS");
		cout << "5. Berikut ini yang bukan termasuk metode pengurutan data pada elemen array..." << endl;
		cout << "a. Bubble Sort " << endl;
		cout << "b. Distance Sort " << endl;
		cout << "c. Selection Sort " << endl;
		cout << "Jawaban anda: ";
		cin >> jawaban;
		if(jawaban == "b" || jawaban == "B"){
			nilai += 20;
			break;

		} else if(jawaban == "a" || jawaban == "A" || jawaban == "c" || jawaban == "C"){
			nilai = nilai;
			break;

		} else{
			cout << "Jawaban anda tidak terdapat pada pilihan" << endl;
			cout << "Tekan enter untuk kembali" << endl;
			getch();
		}
	}while(true);

	cout << "Selamat anda telah menyelesaikan tes \\(^o^)/" << endl;
	return nilai;
}
