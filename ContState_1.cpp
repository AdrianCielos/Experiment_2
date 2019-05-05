#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	cout << "Here are the following subscription packages we are offering: " << endl;	
	cout << endl;
	cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr." << endl;
	cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr." << endl;
	cout << "Package C: For P1995/mo of unlimited access is provided." << endl;
	cout << endl;

	char a;
	cout << "Please choose the package you have purchased between [A], [B], and [C]. : ";
	cin >> a;
	cout << endl;
	cout << "You have chosen package " << a << "." << endl;
	cout << endl;
	switch (a)
		{	
			case 'A':
			case 'a':
				int x;
				cout << "Please enter the number of hours of your internet access: ";
				cin >> x;
				
				if (0 < x && x <= 10)
					cout << "You did not consume any additional number of hours, your bill is a total of P995.00.";
				else if (x > 10)
					cout << "You have consumed an additional " << (x-10) << " hour/s. Your bill is a total of " << "P" << (995+((x-10)*20)) << ".";
				break;
			case 'B':
			case 'b':
				int y;
				cout << "Please enter the number of hours of your internet access: ";
				cin >> y;
				
				if (0 < y && y <= 20)
					cout << "You did not consume any additional number of hours, your bill is a total of P1495.00.";
				else if (y > 10)
					cout << "You have consumed an additional " << (y-20) << " hour/s. Your bill is a total of " << "P" << (995+((y-20)*10)) << ".";
				break;
			case 'C':
			case 'c':
				cout << "You have unlimited internet access! Your bill is a total of P1995.00.";
				break;
			default: 
				cout << "Invalid Package";
				break;
		}		
	
	getch ();
	return 0;
}
