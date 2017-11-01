#pragma once

using namespace std;
#define TxtLength 20
struct Book
{
	char Title[TxtLength];
	char Author[TxtLength];
	short PublYear;
	bool IsGood;
};

Book MyBook; //MyBook is a struct variable
char C;