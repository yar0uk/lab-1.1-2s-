#include "Cursor.h"
#include <iostream>
using namespace std;
void Cursor::SetFirst(int value)
{
	first = value;
}
void Cursor::SetSecond(unsigned int value)
{
	second = value;
}
bool Cursor::Init(int x, int y)
{
	first = x;
	if ((y >= 0) || (x >= 0))
	{
		first = x;
		second = y;
		return true;
	}
	else
	{
		return false;
	}
}
void Cursor::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}
void Cursor::Read()
{
	int x, y;
	do {
		cout << "first = ? ";
		cin >> x;
		cout << "second = ?";
		cin >> y;
	} while (!Init(x, y));
}
void Cursor::changeX(int N)
{
	first = N;
}
void Cursor::changeY(int N)
{
	second = N;
}
/////////////////////////////////////////////////