#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	int num;
	int ones, tens, hundreds;
	
	cin >> num;
	ones = num % 10;
	tens = (num / 10) % 10;
	hundreds = (num / 100) % 10;
	cout << ones << setw(2) << tens << setw(2) << hundreds << endl;
	 
	return 0;
}
