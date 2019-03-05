/*
Nama	: Ahmad Egy Aranda
NPM		: 140810180043
Kelas	: A
Tanggal	: 5 Maret 2019
******************************************/

#include<iostream>
#include<string.h>
using namespace std;

struct Theater{
	int room;
	char seat[3];
	char movieTitle[30];
};

int main()
{
	Theater theater;
	theater.room=7;
	strcpy(theater.seat, "J9");
	strcpy(theater.movieTitle, "Adit&Jarwo");
	
	cout<<"Room		: "<<theater.room<<endl;
	cout<<"Seat		: "<<theater.seat<<endl;
	cout<<"Movie Title	: "<<theater.movieTitle<<endl;
}
