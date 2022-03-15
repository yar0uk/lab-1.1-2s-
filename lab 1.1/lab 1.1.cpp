#include <iostream>
#include "Cursor.h"
using namespace std;
Cursor makeCursor(int x, int y)
{
	Cursor nn;
	if (!nn.Init(x, y))
		cout << "wrong argument to Init (second)" << endl;
	return nn;
}
int main()
{
	Cursor n;
	n.Init(10, 10);
	n.Display();
	int x, y;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	n.changeX(x);
	n.changeY(y);
	n.Display();
	Cursor k;
	k.Read();
	k.Display();
	Cursor i;
	int a, b;
	cout << "first = ? ";
	cin >> a;
	cout << "second = ?";
	cin >> b;
	i = makeCursor(a, b);
	i.Display();
	return 0;
}