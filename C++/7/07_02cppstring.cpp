#include <iostream>
#include <cstring>
#include <string>
using namespace std;
const int MAXSIZE = 100;

int main(void)
{
	char s1[MAXSIZE], s2[MAXSIZE];
	string str1, str2;
	
	// read only a word
	cin >> s1;
	cout << "s1 = " << s1 << ", strlen(s1) = " << strlen(s1) << endl;
	cin >> s2;
	cout << "s2 = " << s2 << ", strlen(s2) = " << strlen(s2) << endl;
	cin.get();		// read last newline
	// read a string
	cin.getline(s1, MAXSIZE);
	cout << "s1 = " << s1 << ", strlen(s1) = " << strlen(s1) << endl;
	cin.getline(s2, MAXSIZE);
	cout << "s2 = " << s2 << ", strlen(s2) = " << strlen(s2) << endl;
	
	// read
	getline(cin, str1);
	cout << "str1 = " << str1 << ", str1.length() = " << str1.length() << endl;
	getline(cin, str2);
	cout << "str2 = " << str2 << ", str2.length() = " << str2.length() << endl;
	
	return 0;
}
