#include <iostream>
using namespace std;

int main(void)
{
	int year;
	
	cin >> year;
	if((year%4==0 && year%100!=0) || (year%400==0))
		cout << year << " is a leap year!" << endl;
	else
		cout << year << " is a common year!" << endl;
	
	return 0;
}
