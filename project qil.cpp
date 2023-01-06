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
string IN;
char salah;
string NIM, Nama;
do{



//cout<<"==========List NIM yang terdaftar========== \n";

cout<<"LOGIN\n";

cout<<"Masukan NIM: 2207421";
cin>>NIM;


	if(NIM=="047"){
		Nama="Abdurrahman Ammar Ihsan \n";
		IN="SELAMAT DATANG";
		salah=='n';
	} else{
		cout<<"Maaf NIM tidak terdaftar \n";
		salah='y';
		getch();	
	}
	
system(clear);
}while (salah=='y');
cout<<IN<<endl;
cout<<"Nama 	: "<<Nama<<endl;
cout<<"NIM	: 2207421"<<NIM<<endl;
cout<<"Kelas	: TMJ 1B"<<endl;

	
	
	
	
return 0;	
}