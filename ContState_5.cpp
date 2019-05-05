#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int a, b = 0, c =1, d;
	cout << "Fibonacci Numbers: " << endl;
	
	for (a=0; a < 22; a++)
	{
		cout << b << ", ";
		d =  b+c;
		b=c;
		c=d;
		
	}
	getch ();
	return 0;
}
