#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a;
	cout << "Please enter the number of gallon/s you have used for the month: ";
	cin >> a;
	cout << endl;
	
	if (0 < a && a <= 10000000000)
	{
		cout << "Your total bill for the month is: P" << (35+(a*1.10)) << ".";
		cout << endl;
		cout << endl;
		
		double c;
		cout << "Please enter the amount of unpaid balance: ";
		cin >> c;
		cout << endl;
		
		if (c > 0)
			cout << "There is a total of P" << c << " unpaid balance. Your total bill is: P" << (c+((35+(a*1.10))+20)) << ".";
		else if (c == 0)
			cout << "There is a total of P" << c << " unpaid balance. Your total bill is: P" << ((35+(a*1.10))) << ".";
		else
			cout << "INVALID BALANCE!";
		cout << endl;
	}
	else 
		cout << "INVALID AMOUNT!";
	

	getch ();
	return 0;
}
