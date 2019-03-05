/*
Nama	: Ahmad Egy Aranda
NPM		: 140810180043
Kelas	: A
Program	: 
Tanggal	: 5 Maret 2019
******************************************/

#include<iostream>
using namespace std;

void moveZeroToEnd(int(&data)[100],int n);
void input(int(&data)[100],int& n);
void output(int data[100],int n);

int main()
{
	int data[100], n;
	input(data,n);
	moveZeroToEnd(data,n);
	output(data,n);
}

void input(int(&data)[100],int& n)
{
	cout<<"Masukkan Jumlah Data	: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Masukkan Data ke-"<<i+1<<"	: ";cin>>data[i];
	}
}

void moveZeroToEnd(int(&data)[100],int n)
{
	for(int i=0;i<n;i++)
	{
		if(data[i]==0)
		{
			swap(data[i],data[i+1]);
		}
	}
}

void output(int data[100],int n)
{
	system("cls");
	for(int i=0;i<n;i++)
	{
		cout<<data[i]<<" ";
	}
}
