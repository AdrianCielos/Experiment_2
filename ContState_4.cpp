#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main ()
{
	int a, b;
	cout << "Different Counting..." << endl;
	
	for (a = 1; a <= 30; a++)
	{
		if (a <= 10)
			cout << a << ", ";
		else if (a > 11)
			{
				if (a % 2 == 1)
					cout << a+1 << ", ";
			}
	}
	getch ();
	return 0;
}
