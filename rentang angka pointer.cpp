#include<iostream>
#include<conio.h>

using namespace std;

int main ()

{

double NilaiUjian;
double *a = &NilaiUjian ;;

char skor;
cout << "Agustin Dwinurcahyani \n";
cout << "D4 Manajemen Informatika \n";
cout << "================================ \n\n";
cout << "Selamat Datang Di Program Rentang Angka\n\n";

cout<<"Masukan Nilai Ujian	: " ;
cin>>NilaiUjian;
cout<<endl;


if(NilaiUjian >= 90){
cout << "Nilai Ujian		: " << *a << endl;
skor= 'A' ;
}

else if(NilaiUjian >= 70){
cout << "Nilai Ujian		: " << *a << endl;
skor= 'B';
}

else if(NilaiUjian >= 60){
cout << "Nilai Ujian		: " << *a << endl;
skor= 'C';
}

else if(NilaiUjian >= 50){
cout << "Nilai Ujian		: " << *a << endl;
skor= 'D';
}

else if (NilaiUjian < 50){
cout << "Nilai Ujian		: " << *a << endl;
skor= 'E';
}
    

cout<<"Skornya adalah		: "<<skor<<endl;



return 0;
}
