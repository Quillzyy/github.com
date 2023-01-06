
#include<iostream>
#include <cstdlib>
#include<conio.h>

#ifdef _WIN32
	#define clear "cls"
#else
	#define clear "clear"
#endif
using namespace std;




int main(){
char salah;
int pil;
string NIM, Nama;
do{



//cout<<"==========List NIM yang terdaftar========== \n";

system(clear);
cout<<"LOGIN\n";
cout<<"Masukan NIM: 2207421";
cin>>NIM;


	if(NIM=="047"){
		Nama="Abdurrahman Ammar Ihsan ";
	}else if (NIM=="059"){
		Nama="Corneius Yuli Rosdianto";
	}else if (NIM=="032"){
		Nama="Kevin Alonzo Manuel Bakara";
	}else if (NIM=="057"){
		Nama="Shaquille Afriza Hidayat";
	}else if (NIM=="056"){
		Nama="Muhammad Brian Azura Nixon";	
	}else if (NIM=="051"){
		Nama="Jonatan Victorian Wijaya";
	}else{
		cout<<"Maaf NIM tidak terdaftar \n";
		salah='y';
    }


salah=='n';		
system(clear);
}while (salah=='y');
cout<<"SELAMAT DATANG"<<endl;
getch();
cout<<"Nama 	: "<<Nama<<"\t |\n";
cout<<"NIM	: 2207421"<<NIM<<"\t\t\t |\n";
cout<<"Kelas	: TMJ 1B"<<"\t\t\t |\n";
cout << "_________________________________________|";


cout << endl ;
cout << "1. Lihat Profil" << endl;
cout << "2. Ujian" << endl;
cout << "3. Lihat Nilai" << endl;
cout 
<< "4. Logout" << endl;
cout << "Pilihan Anda : ";
cin >> pil;

	
return 0;	
}

