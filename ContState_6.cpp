#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main ()
{
	int a = 0, b = 0, c;
	
	
	do{
		
	cout << "Enter a number: "; 
	cin >> a;		
	
	if (a <= 0)
		{
		cout << "Please input positive integer only! Thank you!";
		break;
		}

	for (c=1; c<=a; c++)
		{
		b +=c;
		}
		cout << "The sum of all whole number from 1 to " << a << " is " << b << "." << endl;
		b = 0;
		
	}while (a!=0);
	
	getch ();
	return 0;
}



