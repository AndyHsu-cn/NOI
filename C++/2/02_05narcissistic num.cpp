#include <iostream>
using namespace std;

int main(void)
{
	int num;
	int ones, tens, hundreds;
	
	cin >> num;
	ones = num % 10;
	tens = (num / 10) % 10;
	hundreds = num / 100;
	
	if(num == hundreds * hundreds * hundreds + tens * tens * tens + ones * ones * ones)
		cout << num << " is a Narcissistic number!" << endl;
	else
		cout << num << " is not a Narcissistic number!" << endl;
	
	return 0;
}
