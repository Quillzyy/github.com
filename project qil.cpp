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
do{

string NIM;

//cout<<"==========List NIM yang terdaftar========== \n";

cout<<"LOGIN\n";

cout<<"Masukan NIM: ";
cin>>NIM;


if(NIM=="047"){
IN="SELAMAT DATANG Abdurrahman Ammar Ihsan \n";	
salah=='n';
}
else{
cout<<"Maaf NIM tidak terdaftar \n";
salah='y';

getch();	
}
system(clear);
}while (salah=='y');
cout<<endl;

cout<<IN;
	
	
	
	
return 0;	
}