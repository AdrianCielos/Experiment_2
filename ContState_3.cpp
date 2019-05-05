#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()
{
	int x, y, w;
	double z;
	z = 2.5;
	w = sqrt(y+z);
	cout << fixed << showpoint << setprecision(2);
	
	cout << "Input any two positive integer for x: "; 
	cin >> x; 
	cout << "and y: "; 
	cin >> y; 
	cout << endl;
	
	switch (x)
	{	
		case 1:
			if (1 < y && y < 5)
				cout << "V = " << x*y*z;
			else if (y >= 5)
				cout << "V = " << (x+(y/z));
			else 
				cout << "INVALID INPUT!";
			break;
		case 2:
			if (x > y && y <= 5)
				cout << "V = " << ((x-y)/z); 
			else if (y > x && y <= 5)
				cout << "V = " << ((y-x)/z);
			else if (y > 5)
				cout << "V = " << (x-(w));
			else 
				cout << "INVALID INPUT!";
			break;		
		default:
			if (0 <= x && x > 2 && 0 <= y ) //any other value of x and y, so dapat wala dun sa given range.
				cout << "V = " << (x+y+z);
			else 
				cout << "INVALID INPUT!";
			break;	
	}	
	getch ();
	return 0;
}

