#include <iostream>
using namespace std;

int main(void)
{
	int a = 10;
	int * pa = &a;
	int &rb = a;
	string s = "C++";
	string *ps = &s;
	
	cout << "pa = " << pa << endl;
	cout << "rb = " << rb << endl;
	cout << "*pa = " << *pa << endl;
	cout << "ps = " << ps << endl;
	cout << "*ps = " << *ps << endl; 
	
	return 0;
}
