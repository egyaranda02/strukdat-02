/*
Nama	: Ahmad Egy Aranda
NPM		: 140810180043
Kelas	: A
Program	: 
Tanggal	: 5 Maret 2019
******************************************/
#include<string.h>
#include<iostream>
using namespace std;

struct Orang{
	int umur;
	char nama[30];
	char jk;
	char goldar;
};

int main()
{
	Orang orang;
	orang.umur=10;
	strcpy(orang.nama, "fahmi");
	orang.jk='L';
	orang.goldar='O';
	
	cout<<"Umur	: "<<orang.umur<<endl;
	cout<<"Nama	: "<<orang.nama<<endl;
	cout<<"Goldar	: "<<orang.goldar<<endl;
	cout<<"JK	: "<<orang.jk<<endl;
}
