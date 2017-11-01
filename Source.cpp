
#include <iostream>
#include <fstream>
using namespace std;

void ReadIn();
void WritetoFile();

//struct Book
//	{
//		char Title[20];
//		char Author[20];
//		short PublYear;
//		bool IsGood;
//	};
//
//	Book MyBook; //MyBook is a struct variable
//	char C;
#include "Variables.h";

int main()
{
	ReadIn();
	WritetoFile();
	
	return 0;
}

void ReadIn()
{
	cout << "Book information: \n" << "Title: ";
	cin.getline(MyBook.Title, TxtLength, '\n');

	cout << "Author: ";
	cin.getline(MyBook.Author, TxtLength, '\n');

	cout << "Publication Year: ";
	cin >> MyBook.PublYear;

	do
	{

		cout << "\nIs this a good book? [y/n]: ";
		cin >> C;
		MyBook.IsGood = (toupper(C) == 'Y');
		
	} while (!(toupper(C) == 'Y' || toupper(C) == 'N'));


}

void WritetoFile()
{
	ofstream MyFile("BookInfo.txt", ios::binary); //created a binary file can use .bin but can't open
	MyFile.write((char *)&MyBook, sizeof(Book)); //writing to BookInfo by typecasting the info into characters
	MyFile.close();
}