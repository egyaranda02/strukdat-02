/*
Nama	: Ahmad Egy Aranda
NPM	: 140810180043
Kelas	: A
Tanggal	: 5 Maret 2019
******************************************/
#include<iostream>
using namespace std;

struct data{
	char nip[1];
	char nama[30];
	int gol;
	int gaji;
};
typedef data gaji;

void input(gaji& pegawai, int n);
void cariGaji(gaji& pegawai, int n);
void rataGaji(int& rata,int n, gaji pegawai);
void sort(gaji& pegawai, int n);
void gajiTertinggi(gaji& pegawai, int n);
void print(gaji pegawai, int n);

int main()
{
	int n, rata;
	gaji pegawai;
	cout<<"Masukkan Jumlah Data Pegawai	: ";cin>>n;
	input(pegawai,n);
	cariGaji(pegawai,n);
	sort(pegawai,n);
	print(pegawai,n);
	rataGaji(rata,n,pegawai);
	gajiTertinggi(pegawai,n);
	
	
	

}

void input(gaji& pegawai, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Masukkan Nama	: ";cin>>pegawai.nama[i];
		cout<<"Masukkan NIP	: ";cin>>pegawai.nip[i];
		cout<<"Masukkan Golongan	:";cin>>pegawai.gol[i];
	}
}

void cariGaji(gaji& pegawai, int n)
{
	for(int i=0;i<n;i++)
	{
		if(pegawai.gol[i]==1)
		{
			pegawai.gaji=2000000;
		}
		else if(pegawai.gol[i]==2)
		{
			pegawai.gaji=3000000;
		}
		else if(pegawai.gol[i]==3)
		{
			pegawai.gaji=5000000;
		}
		else if(pegawai.gol[i]==4)
		{
			pegawai.gaji=8000000;
		}
	}
}

void rataGaji(int& rata,int n, gaji pegawai)
{
	for(int i=0;i<n;i++)
	{
		rata+=pegawai.gaji[i];
	}
	rata/=n;
	cout<<"Rata-Rata Gaji	: "<<rata<<endl;
}

void gajiTertinggi(gaji pegawai, int n)
{
	for(int i=0;i<n;i++)
	{
		if(pegawai.gaji[i<pegawai.nip[i+1])
		{
			swap(pegawai[i],pegawai[i+1]);
		}
	}
	cout<<"Gaji Tertinggi	: "<<pegawai.gaji[0];
	cout<<"Gaji Terendah	: "<<pegawai.gaji[n-1];
}


void sort(gaji pegawai, int n)
{
	for(int i=0;i<n;i++)
	{
		if(pegawai.nip[i>pegawai[nip[i+1])
		{
			swap(pegawai[i],pegawai[i+1]);
		}
	}
}

void print(gaji pegawai, int n)
{
	cout<<"========================================================="<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Nama		: "<<pegawai.nama[i]<<endl;
		cout<<"NIP		: "<<pegawai.nip[i]<<endl;
		cout<<"Golongan		: "<<pegawai.gol[i]<<endl;
		cout<<"Gaji		: "<<pegawai.gaji[i]<<endl;
		cout<<"========================================================="<<endl;
		
	}
}
